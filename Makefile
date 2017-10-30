##################################################
####### Makefile for EEPROM Logger Project #######
##################################################

OBJECTDIR = ./build/obj
BUILDDIR = ./build
INCDIR = ./include

EXEC_NAME := logger
CC = gcc
CFLAGS = -c -I$(INCDIR)

include ./app/Makefile
include ./lib/Makefile
include ./driver/Makefile


logger:	init executable


executable: $(OBJECTS)
	$(CC) -o $(EXEC_NAME) $^

init:
	@echo "Creating Directory"
	mkdir -p $(OBJECTDIR)

clean:
	rm -rf $(BUILDDIR)
	rm -f $(EXEC_NAME)
