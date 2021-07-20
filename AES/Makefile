CC = g++
WW = -W -Wall
OPZ = -O2

PRJ_NAME = main

SRC_DIR = ./src
BIN_DIR = ./bin/
LIB_DIR = ./lib

SOURCES = $(shell find $(SRC_DIR) $(LIB_DIR) -type f -name *.cpp)
OBJS = $(patsubst %.cpp,%.o,$(SOURCES))

DIRS = $(shell find $(SRC_DIR) $(LIB_DIR) -type d)
INCDIR = $(addprefix -I,$(DIRS))

.PHONY: all clean $(PRJ_NAME)

all: ;

$(PRJ_NAME): $(OBJS)
		@$(CC) $^ -o $(BIN_DIR)$@ -g

%.o: %.cpp
		@$(CC) $^ $(WW) $(OPZ) $(INCDIR) -o $@ -c -g

test: 
	@echo $(BIN_DIR)$(PRJ_NAME)

clean:
		rm -f $(OBJS)
		rm -f $(BIN_DIR)$(PRJ_NAME)