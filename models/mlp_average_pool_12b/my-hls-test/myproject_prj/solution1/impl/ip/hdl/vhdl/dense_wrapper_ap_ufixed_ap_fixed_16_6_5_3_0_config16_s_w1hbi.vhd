-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2020.1 (64-bit)
-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_rom is 
    generic(
             DWIDTH     : integer := 19; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 48
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "0000000111111111110", 1 => "0000000111111110100", 
    2 => "0000000111111100110", 3 => "0000000000000000111", 
    4 => "0000000000000000100", 5 => "0000000000000000011", 
    6 => "0000000000000001010", 7 => "0000000000000011001", 
    8 => "0000000000000010101", 9 => "0000000111111101101", 
    10 => "0000000111111111010", 11 => "0000000000000100100", 
    12 => "0000000111111000010", 13 => "0000000111111111010", 
    14 => "0000000111111011110", 15 => "0000000000000000010", 
    16 => "0000000000000000001", 17 => "0000000000000000111", 
    18 => "0000000000000010100", 19 => "0000000000000000000", 
    20 => "0000000111111111010", 21 => "0000000111111111111", 
    22 => "0000000111111111010", 23 => "0000000111111100110", 
    24 => "0000000111111110100", 25 => "0000000000000001010", 
    26 => "0000000000000001000", 27 => "0000000111111000000", 
    28 => "0000000000000011000", 29 => "0000000111111111101", 
    30 => "0000000000000010011", 31 => "0000000111111111101", 
    32 => "1001110000000100001", 33 => "1111000000000000111", 
    34 => "1110101000000001101", 35 => "1111111111111100111", 
    36 => "0010011111111011110", 37 => "0100101000000001111", 
    38 => "0001100000000011101", 39 => "1111000000000000000", 
    40 => "1110000000000001100", 41 => "1110111000000010011", 
    42 => "1111110111111101000", 43 => "1110100000000001100", 
    44 => "1111110000000000000", 45 => "0000001111111100111", 
    46 => "0000000000000000000", 47 => "0111001000000000101" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi is
    generic (
        DataWidth : INTEGER := 19;
        AddressRange : INTEGER := 48;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi is
    component dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_rom_U :  component dense_wrapper_ap_ufixed_ap_fixed_16_6_5_3_0_config16_s_w1hbi_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


