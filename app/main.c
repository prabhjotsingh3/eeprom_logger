#include <stdio.h>
#include <string.h>

#include "erp_lib_logger.h"

int main(void) {

	int ret;
	char *rec = "This is record no 1";
	short rec_len = strlen(rec);

	ret = erp_logger_init();
	
	if(ret != 0) {
		printf("Failed to initialise logging system!!!\n");
	}
	else {
		// Send command to write to logger
		//ret = erp_logger_write(rec,rec_len);

		printf("ret = %d\n",ret);
	}

	return 0;
}
