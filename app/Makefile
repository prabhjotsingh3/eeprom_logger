#######################################
####### Makefile for App Directory#####
#######################################

APP_DIR := ./app

OBJECTS += $(patsubst $(APP_DIR)/%.c, $(OBJECTDIR)/%.o, $(wildcard $(APP_DIR)/*.c))

$(OBJECTDIR)/%.o: $(APP_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

