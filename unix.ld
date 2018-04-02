SECTIONS
{
    .eeprom : {
        KEEP(*(.eeprom));
        __EEPROM_SECTION_START = .;
    }
}
INSERT AFTER .rodata
__SIZE_OF_EEPROM_SECTION = SIZEOF(.eeprom);
