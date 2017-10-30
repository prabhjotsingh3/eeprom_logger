#include <stdio.h>

#include "erp_lib_logger.h"
#include "erp_eeprom.h"

eeprom_interface_t eeprom_interface;

int erp_logger_init(void) {

	printf("#### Lib logger init ######\n");

	//Call driver init function from here
	// The driver shall open the device file.
	// Populate the library to driver interface structure.
	erp_eeprom_init();

	return 0;
}
