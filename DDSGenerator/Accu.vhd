----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 		M. Kögel / P. Weber
-- 
-- Create Date:    10:55:21 03/17/2012 

----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_unsigned.All;
use IEEE.STD_LOGIC_arith.ALL;


entity Accu is
generic ( ACCU_BITS : natural );
    Port ( Clk : in  STD_LOGIC;
           nReset : in  STD_LOGIC;
           Step : in  STD_LOGIC_vector
						(ACCU_BITS-2 downto 0);
           Res : out  STD_LOGIC_vector 
						(ACCU_BITS-1 downto 0));
end Accu;

architecture Behavioral of Accu is
signal accu : natural;
begin

	process (Clk, nReset)
	begin
		if nReset ='0' then
			accu <= 0;
			elsif rising_edge(Clk) then
				accu <= accu + conv_integer(Step);
		end if;
	end process;
	Res <= conv_std_logic_vector (accu, Res'length);

end Behavioral;


