----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 		M. Kögel / P. Weber
-- 
-- Create Date:    10:55:21 03/17/2012 

----------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 

 
ENTITY testbench1 IS
	generic (ACCU_BITS : natural := 20;
				LUT_BITS	 : natural := 9;
				DAC_BITS  : natural := 8 );
END testbench1;
 
ARCHITECTURE Behavioral OF testbench1 IS 
     -- Component Declaration for the Unit Under Test (DUT)
     COMPONENT Top is
	 generic (ACCU_BITS : natural;
				 LUT_BITS  : natural;
				 DAC_BITS  : natural );
    PORT(
         Clk : IN  std_logic;
         nReset : IN  std_logic;
         Step : IN  std_logic_vector(18 downto 0);
         DAC : OUT  std_logic_vector(7 downto 0);
			Form: IN std_logic_vector(1 downto 0)
        );
    END COMPONENT;
    
   --Inputs
   signal Clk : std_logic := '0';
   signal nReset : std_logic := '0';
   signal Step : std_logic_vector(18 downto 0)
						:= (others => '0');
	signal Form : std_logic_vector (1 downto 0)
						:= "01";
 	--Outputs
   signal DAC : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant Clk_period : time := 10 ns;
 
BEGIN
DUT: Top generic map ( ACCU_BITS=>ACCU_BITS,
			LUT_BITS=>LUT_BITS, DAC_BITS=>DAC_BITS)
			port map (Clk=>clk, nReset=>nReset,
			Step=>step, DAC=>dac, Form=>Form);
test: process
begin

	wait for 1000 ns;
	nReset <= '1';
	
	step <=B"000_0000_1000_0000_0000";
	
for j in 1 to 1024 loop
	
	clk <='0';
	wait for 10 ns;
	clk <='1';
	wait for 10 ns;
	
	
end loop;


wait for 100 ns;

Form <="11";


for j in 1 to 1024 loop
	
	clk <='0';
	wait for 10 ns;
	clk <='1';
	wait for 10 ns;
	
end loop;



wait for 100 ns;

Form <="10";

for j in 1 to 1024 loop
	
	clk <='0';
	wait for 10 ns;
	clk <='1';
	wait for 10 ns;
	
end loop;

wait;
end process;
end Behavioral;

