----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 		M. Kögel / P. Weber
-- 
-- Create Date:    10:55:21 03/17/2012 

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;


entity Top is
	 generic ( ACCU_BITS : natural := 20;
				  LUT_BITS	: natural := 9;
				  DAC_BITS	: natural := 8);
    Port ( Clk : in  STD_LOGIC;
           nReset : in  STD_LOGIC;
           Step : in  STD_LOGIC_VECTOR (ACCU_BITS-2 downto 0);
           DAC : out  STD_LOGIC_VECTOR (DAC_BITS-1 downto 0);
			  Form: in STD_LOGIC_VECTOR (1 downto 0));
			  
end Top;



architecture Behavioral of Top is

component Accu is
	generic ( ACCU_BITS : natural );
	port	  ( Clk, nReset : in std_logic;
				 Step			 : in std_logic_vector (ACCU_BITS-2 downto 0);
				 Res			 : out std_logic_vector (ACCU_BITS-1 downto 0));
end component;

component LUT is
	generic ( LUT_BITS	:	natural;
				 DAC_BITS   :	natural );
	port ( Res		: in std_logic_vector (LUT_BITS-1 downto 0);
			 DAC		: out std_logic_vector (DAC_BITS-1 downto 0);
			 Form    : in std_logic_vector (1 downto 0));
end component;

signal res : std_logic_vector(ACCU_BITS-1 downto 0);

begin

AC: Accu generic map (ACCU_BITS => ACCU_BITS)
			port map (Clk=>Clk, nReset=>nReset, Step=>Step, Res=>res);
			
LT: Lut generic map (LUT_BITS=>LUT_BITS, DAC_BITS=>DAC_BITS)
	port map ( Dac=>Dac, Res=>res(ACCU_BITS-1 downto
				  ACCU_BITS-LUT_BITS), Form=>Form);

end Behavioral;

