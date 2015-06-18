--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:24:45 06/03/2015
-- Design Name:   
-- Module Name:   D:/final project/SDRAM/SDRAM_TEST1.vhd
-- Project Name:  SDRAM
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: CONTROLLER_SDRAM
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY SDRAM_TEST1 IS
END SDRAM_TEST1;
 
ARCHITECTURE behavior OF SDRAM_TEST1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT CONTROLLER_SDRAM
    PORT(
         clk_100m0_i : IN  std_logic;
         reset_i : IN  std_logic;
         refresh_i : IN  std_logic;
         rw_i : IN  std_logic;
         we_i : IN  std_logic;
         addr_i : IN  std_logic_vector(23 downto 0);
         data_i : IN  std_logic_vector(15 downto 0);
         ub_i : IN  std_logic;
         lb_i : IN  std_logic;
         ready_o : OUT  std_logic;
         done_o : OUT  std_logic;
         data_o : OUT  std_logic_vector(15 downto 0);
         sdCke_o : OUT  std_logic;
         sdCe_bo : OUT  std_logic;
         sdRas_bo : OUT  std_logic;
         sdCas_bo : OUT  std_logic;
         sdWe_bo : OUT  std_logic;
         sdBs_o : OUT  std_logic_vector(1 downto 0);
         sdAddr_o : OUT  std_logic_vector(12 downto 0);
         sdData_io : INOUT  std_logic_vector(15 downto 0);
         sdDqmh_o : OUT  std_logic;
         sdDqml_o : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk_100m0_i : std_logic := '0';
   signal reset_i : std_logic := '0';
   signal refresh_i : std_logic := '0';
   signal rw_i : std_logic := '0';
   signal we_i : std_logic := '0';
   signal addr_i : std_logic_vector(23 downto 0) := (others => '0');
   signal data_i : std_logic_vector(15 downto 0) := (others => '0');
   signal ub_i : std_logic := '0';
   signal lb_i : std_logic := '0';

	--BiDirs
   signal sdData_io : std_logic_vector(15 downto 0);

 	--Outputs
   signal ready_o : std_logic;
   signal done_o : std_logic;
   signal data_o : std_logic_vector(15 downto 0);
   signal sdCke_o : std_logic:='0';
   signal sdCe_bo : std_logic;
   signal sdRas_bo : std_logic;
   signal sdCas_bo : std_logic;
   signal sdWe_bo : std_logic;
   signal sdBs_o : std_logic_vector(1 downto 0);
   signal sdAddr_o : std_logic_vector(12 downto 0);
   signal sdDqmh_o : std_logic;
   signal sdDqml_o : std_logic;

   -- Clock period definitions
   constant clk_100m0_i_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: CONTROLLER_SDRAM PORT MAP (
          clk_100m0_i => clk_100m0_i,
          reset_i => reset_i,
          refresh_i => refresh_i,
          rw_i => rw_i,
          we_i => we_i,
          addr_i => addr_i,
          data_i => data_i,
          ub_i => ub_i,
          lb_i => lb_i,
          ready_o => ready_o,
          done_o => done_o,
          data_o => data_o,
          sdCke_o => sdCke_o,
          sdCe_bo => sdCe_bo,
          sdRas_bo => sdRas_bo,
          sdCas_bo => sdCas_bo,
          sdWe_bo => sdWe_bo,
          sdBs_o => sdBs_o,
          sdAddr_o => sdAddr_o,
          sdData_io => sdData_io,
          sdDqmh_o => sdDqmh_o,
          sdDqml_o => sdDqml_o
        );

  
clk_100m0_i <= not clk_100m0_i after 5 ns;
rw_i <= '0','1' after 180 ns,'0' after 260 ns,'1' after 340 ns,'0' after 360 ns;
we_i <= '0','1' after 300 ns; 
data_i <= "1010101000001111";
addr_i <= "011010101110101010101011";--,"111110101110101010101011" after 330 ns;
END;
