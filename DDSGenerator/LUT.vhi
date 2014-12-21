
-- VHDL Instantiation Created from source file LUT.vhd -- 22:13:51 03/18/2012
--
-- Notes: 
-- 1) This instantiation template has been automatically generated using types
-- std_logic and std_logic_vector for the ports of the instantiated module
-- 2) To use this template to instantiate this entity, cut-and-paste and then edit

	COMPONENT LUT
	PORT(
		Res : IN std_logic;
		form : IN std_logic_vector(1 downto 0);          
		Dac : OUT std_logic
		);
	END COMPONENT;

	Inst_LUT: LUT PORT MAP(
		Res => ,
		form => ,
		Dac => 
	);


