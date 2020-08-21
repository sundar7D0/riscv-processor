--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:47:53 11/12/2019
-- Design Name:   
-- Module Name:   /home/pruthvirg/Desktop/sem_fire/comp_org/wd_assign_4/cpu_pipeline/cpu_pipeline_tb.vhd
-- Project Name:  cpu_pipeline
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cpu_final
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
 
ENTITY cpu_pipeline_tb IS
END cpu_pipeline_tb;
 
ARCHITECTURE behavior OF cpu_pipeline_tb IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cpu_final
    PORT(
         reset : IN  std_logic;
         clk : IN  std_logic;
         d0 : OUT  std_logic_vector(31 downto 0);
         pc : OUT  std_logic_vector(31 downto 0);
         x31 : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
   signal clk : std_logic := '0';

 	--Outputs
   signal d0 : std_logic_vector(31 downto 0);
   signal pc : std_logic_vector(31 downto 0);
   signal x31 : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cpu_final PORT MAP (
          reset => reset,
          clk => clk,
          d0 => d0,
          pc => pc,
          x31 => x31
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
