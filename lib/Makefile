#######################################
####### Makefile for lib Directory#####
#######################################

LIB_DIR := ./lib

OBJECTS += $(patsubst $(LIB_DIR)/%.c, $(OBJECTDIR)/%.o, $(wildcard $(LIB_DIR)/*.c))

$(OBJECTDIR)/%.o: $(LIB_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

