

int erp_logger_init(void);
int erp_logger_write_record(unsigned char *, short len);


//typedef int (*dri_read)(unsigned char *rec, short rec_len);
typedef int (*dri_write_t)(unsigned char *rec, short rec_len);
typedef int (*dri_erase_t)(void);

typedef struct {
	int device_size;
	char *device_name;
	dri_write_t eeprom_write;
	dri_erase_t eeprom_erase;
}eeprom_interface_t;
