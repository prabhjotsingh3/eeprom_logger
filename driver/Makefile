#######################################
#### Makefile for Driver Directory#####
#######################################

DRIVER_DIR := ./driver

OBJECTS += $(patsubst $(DRIVER_DIR)/%.c, $(OBJECTDIR)/%.o, $(wildcard $(DRIVER_DIR)/*.c))

$(OBJECTDIR)/%.o: $(DRIVER_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

