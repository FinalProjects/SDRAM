----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:38:50 06/02/2015 
-- Design Name: 
-- Module Name:    Main_Code - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Main_Code is
	PORT(
			CLK : IN STD_LOGIC;
			
			--SDRAM--
			sdCke_o        : out std_logic;           
			sdCe_bo        : out std_logic;           
			sdRas_bo       : out std_logic;           
			sdCas_bo       : out std_logic;           
			sdWe_bo        : out std_logic;           
			sdBs_o         : out std_logic_vector(1 downto 0);    
			sdAddr_o       : out std_logic_vector(12 downto 0);   
			sdData_io      : inout std_logic_vector(15 downto 0); 
			sdDqmh_o       : out std_logic;           
			sdDqml_o       : out std_logic;    
			sdClock_o		: out std_logic;
			--FT245--
			DATA_FT	 :	out std_logic_vector(7 downto 0);
			FT_WR 	 : out std_logic;
			TXE		 : in  std_logic
	);
end Main_Code;

architecture Behavioral of Main_Code is
		component CONTROLLER_SDRAM is
			 PORT (
				clk_100m0_i    : in std_logic;            
				reset_i        : in std_logic;     
				refresh_i      : in std_logic;     
				rw_i           : in std_logic;    
				we_i           : in std_logic;     
				addr_i         : in std_logic_vector(23 downto 0);   
				data_i         : in std_logic_vector(15 downto 0);   
				ub_i           : in std_logic;            
				lb_i           : in std_logic;            
				ready_o        : out std_logic;    
				done_o         : out std_logic;    
				data_o         : out std_logic_vector(15 downto 0);   
		 
				-- SDRAM side
				sdCke_o        : out std_logic;           
				sdCe_bo        : out std_logic;           
				sdRas_bo       : out std_logic;           
				sdCas_bo       : out std_logic;           
				sdWe_bo        : out std_logic;           
				sdBs_o         : out std_logic_vector(1 downto 0);    
				sdAddr_o       : out std_logic_vector(12 downto 0);   
				sdData_io      : inout std_logic_vector(15 downto 0); 
				sdDqmh_o       : out std_logic;           
				sdDqml_o       : out std_logic;  
				sdClock_o		: out std_logic;
				
				FT_SHOW			: out std_logic_vector(15 downto 0));
		end component;
		
		component Write_to_FT245 is
				port (
				DATA_IN   : in std_logic_vector(15 downto 0);
				DATA_FT	 :	out std_logic_vector(7 downto 0);
				FT_WR 	 : out std_logic;
				TXE		 : in  std_logic;
				CLK_FT   :	in  std_logic);
		end component;
---SDRAM SIGNALS-----
type state_SDRAM is (ST_WAIT,ST_IDLE,ST_WRITE,ST_REFRESH,ST_READ); --(ST_IDLE,ST_WRITE1,ST_WRITE3,ST_WRITE4,ST_WRITE5,ST_WRITE2,ST_READ);--

signal reset_i_S      :  std_logic;     
signal refresh_i_S    :  std_logic;     
signal rw_i_S         :  std_logic;    
signal we_i_S         :  std_logic;     
signal addr_i_S       :  std_logic_vector(23 downto 0):="011010101110101010101011";   
signal data_i_S       :  std_logic_vector(15 downto 0):= "1010101000001111";   
signal ub_i_S         :  std_logic;            
signal lb_i_S         :  std_logic;            
signal ready_o_S      :  std_logic;    
signal done_o_S       :  std_logic;    
signal data_o_S       :  std_logic_vector(15 downto 0);
signal state_SD,state_x_SD		 : state_SDRAM := ST_WAIT; 
signal read_flg		 :  std_logic;
signal cnt 				 : integer range 0 to 1000 := 0;
--signal refresh_60ms 	 : integer range 0 to 6000000 := 0;
---FT245 SIGNALS---
signal FT_SHOW			 :	 std_logic_vector(15 downto 0):= "0000000000000000";
signal FT_SHOW1		 :	 std_logic_vector(15 downto 0):= "0000000000000000";
begin

	SDRAMCTRL : CONTROLLER_SDRAM  PORT MAP(clk_100m0_i=>clk,reset_i=>reset_i_S,refresh_i=>refresh_i_S,rw_i=>rw_i_S,we_i=>we_i_S,
	addr_i=>addr_i_S,data_i=>data_i_S,ub_i=>ub_i_S,lb_i=>lb_i_S,ready_o=>ready_o_S,done_o=>done_o_S,data_o=>data_o_S,
	sdCke_o=>sdCke_o,sdCe_bo=>sdCe_bo,sdRas_bo=>sdRas_bo,sdCas_bo=>sdCas_bo,sdWe_bo=>sdWe_bo,sdBs_o=>sdBs_o,
	sdAddr_o=>sdAddr_o,sdData_io=>sdData_io,sdDqmh_o=>sdDqmh_o,sdDqml_o=>sdDqml_o,sdClock_o=>sdClock_o,FT_SHOW=>FT_SHOW);
	
	Write_to_FT : Write_to_FT245 PORT MAP(DATA_IN=>FT_SHOW1,DATA_FT=>DATA_FT,FT_WR=>FT_WR,TXE=>TXE,CLK_FT=>CLK);
	
--	process(clk)
--	 begin
--	  if (rising_edge(clk)) then
--	  FT_SHOW1 <= Data_O_S;
--	  case state_SD is
--			when ST_IDLE =>
--				if(ready_o_S='1') then
--				 addr_i_S <="011010101110101010100000";
--				 data_i_S  <= "0000000000000001";
--						rw_i_S <= '1'; 
--						we_i_S <= '0';
--						read_flg <='0';
--						state_SD <= ST_WRITE1;
--				end if;
--			
--			when ST_WRITE1 =>
--				if (done_o_S='1') then
--						state_SD <= ST_WRITE2;
--						read_flg <='0';
--				else 
--						state_SD <= ST_WRITE1;
--				end if;
--			when ST_WRITE2 =>
--			   addr_i_S <="011010101110101010100001";
--				--data_i_S  <= "0000000010000000";
--						rw_i_S <= '1'; 
--						we_i_S <= '0';
--				if (done_o_S='1') then
--						state_SD <= ST_WRITE3;
--						rw_i_S <= '0';
--						read_flg <='0';
--				else 
--						state_SD <= ST_WRITE2;
--				end if;
--			when ST_WRITE3 =>
--				if (done_o_S='1') then
--						state_SD <= ST_WRITE4;
--						read_flg <='0';
--				else 
--						state_SD <= ST_WRITE3;
--				end if;
--			when ST_WRITE4 =>
--			   addr_i_S <="011010101110101010100010";
--				data_i_S  <= "0000000000000100";
--						rw_i_S <= '1'; 
--						we_i_S <= '0';
--				if (done_o_S='1') then
--						state_SD <= ST_WRITE5;
--						rw_i_S <= '0';
--						read_flg <='0';
--				else 
--						state_SD <= ST_WRITE4;
--				end if;
--			when ST_WRITE5 =>
--				if (done_o_S='1') then
--						state_SD <= ST_READ;
--						read_flg <='0';
--				else 
--						state_SD <= ST_WRITE5;
--				end if;
--		
--			when ST_READ =>
--				addr_i_S <="011010101110101010100000";
----				data_i_S  <= "0000000000010000";
--						rw_i_S <= '1'; 
--						we_i_S <= '1';	
--				if (done_o_S='1') then
--						--state_SD <= ST_IDLE;
--						--FT_SHOW1 <= Data_O_S;
--						read_flg <='1';
--				else 
--						state_SD <= ST_READ;
--				end if;
--		end case;
--		end if;
--end process;
--end Behavioral;

 process (clk)
    begin
        if rising_edge(clk) then
            state_SD <= state_x_SD;
--				if (state_x_SD = ST_REFRESH) then
--					 refresh_60ms<=0;
--				else
--					 refresh_60ms <= refresh_60ms + 1;
--				end if;
--				
--				if (refresh_60ms=5000000) then
--					state_SD <= ST_REFRESH;
--					refresh_60ms<=0;
--				else
--					state_SD <= state_x_SD;
--				end if;
        end if;
    end process;
 
    process ( state_SD, ready_o_S, done_o_S )
    begin
 
        state_x_SD <= state_SD;
        rw_i_S <= '0';
        we_i_S <= '1';
        ub_i_S <= '0';
        lb_i_S <= '0';
 
        case ( state_SD ) is
 
        when ST_WAIT =>
            if  ready_o_S = '1' then
                state_x_SD <= ST_READ;
            end if;
 
        when ST_IDLE =>
            state_x_SD <= ST_IDLE;
				CNT <= CNT +1;
				if (cnt < 13) then
					state_x_SD <= ST_WAIT;
				ELSE
				state_x_SD <= ST_IDLE;
				end if;
 
        when ST_READ =>
            if done_o_S = '0' then
                rw_i_S <= '1';
					 FT_SHOW1 <= "1010101010101010";
                addr_i_S <= "000000000000011000000011";
            else
               state_x_SD <= ST_WRITE;
            end if;
 
        when ST_WRITE =>
            if done_o_S = '0' then
                rw_i_S <= '1';
                we_i_S <= '0';
					 if(cnt=0) then
                addr_i_S <= "000000000000011000000001";
                data_i_S <= "0000000000000001";
					 elsif(cnt=2) then
					 addr_i_S <= "000000000000011000000010";
                data_i_S <= "0000000000000010";
					 elsif(cnt=4) then
					 addr_i_S <= "000000000000011000000011";
                data_i_S <= "0000000000000011";
					 elsif(cnt=6) then
					 addr_i_S <= "000000000000011000000100";
                data_i_S <= "0000000000000100";
					 elsif(cnt=8) then
					 addr_i_S <= "000000000000011000000101";
                data_i_S <= "0000000000000101";
					  elsif(cnt=10) then
					 addr_i_S <= "000000000000011000000111";
                data_i_S <= "0000000000000111";
					  elsif(cnt=12) then
					 addr_i_S <= "000000000000011000001000";
                data_i_S <= "0000000000001000";
					end if;
                ub_i_S <= '1';
                lb_i_S <= '0';
            else
                state_x_SD <= ST_REFRESH;
            end if;
 
        when ST_REFRESH =>
            if done_o_S = '0' then
                refresh_i_S <= '1';
					
            else
                state_x_SD <= ST_IDLE;
					 refresh_i_S <= '0';--added
            end if;
        end case;
 
   end process;
end Behavioral;
