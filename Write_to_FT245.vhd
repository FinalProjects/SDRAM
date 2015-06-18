----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:56:09 06/09/2015 
-- Design Name: 
-- Module Name:    Write_to_FT245 - Behavioral 
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
use IEEE.STD_LOGIC_unsigned.ALL;
use IEEE.STD_LOGIC_arith.ALL;

entity Write_to_FT245 is
port (
         DATA_IN   : in std_logic_vector(15 downto 0);
         DATA_FT	 :	out std_logic_vector(7 downto 0);
			FT_WR 	 : out std_logic;
			TXE		 : in  std_logic;
			CLK_FT   :	in  std_logic
			);
end Write_to_FT245;

architecture Behavioral of Write_to_FT245 is
signal data   : std_logic_vector(15 downto 0);
signal cnt1	   : std_logic_vector(2  downto 0):=(others=>'0');
signal cnt	   : std_logic_vector(15  downto 0):=(others=>'0');
begin
  -- data1 <= "1111111001110010";--01010101";--01010101--11111111--00000000
	process(DATA_IN,TXE,cnt,cnt1,clk_FT)	---FT CONTROLLER DRIVER
	begin
   data <= DATA_IN;
   if rising_edge(CLK_FT) then
		  cnt<=cnt+'1';
		  if cnt= "10000010001101" then --"1111101000000" then--"1110101001100" then --"10011100010000" then
		     cnt<="0000000000000000";
				if txe='0' then
					if cnt1="000" then
						FT_wr <= '1';
						DATA_FT <= data(7 DOWNTO 0);
						cnt1 <= cnt1+"001";
					elsif cnt1="001" then
						FT_wr <= '0';
						cnt1 <= cnt1 + "001";
					elsif cnt1 = "010" then
						FT_wr <= '1';
						DATA_FT <= data(15 DOWNTO 8);
						cnt1 <= cnt1+"001";
					elsif cnt1="011" then
						FT_wr <= '0';
						cnt1 <= cnt1+"001";
					elsif cnt1="100" then
						FT_wr <= '1';
						DATA_FT <= "01011010";--5A
						cnt1 <= cnt1+"001";
					else
					   FT_wr <= '0';
						cnt1 <= "000";
					end if;
				end if;
		  end if;
		end if;
end process;
end Behavioral;

