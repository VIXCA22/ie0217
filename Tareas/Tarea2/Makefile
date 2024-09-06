
CC = g++
CFLAGS = -Wall
TARGET1 = supermercado

SRCS1 = src/main.cpp src/Cliente.cpp src/Producto.cpp src/Tienda.cpp 
HEADERS = src/Cliente.hpp src/Producto.hpp src/Tienda.hpp 

ifeq ($(OS),Windows_NT)
    EXE_EXT = .exe
    RM = cmd /c del /Q /F
    TARGET_DIR = build/
    RUN_CMD = $(TARGET_DIR)
    TARGET1_PATH := $(subst /,\,$(TARGET_DIR)$(TARGET1)$(EXE_EXT))
else
    EXE_EXT =
    RM = rm -f
    TARGET_DIR = build/
    RUN_CMD = $(TARGET_DIR)
    TARGET1_PATH := $(TARGET_DIR)$(TARGET1)$(EXE_EXT)
endif

all: $(TARGET1_PATH)  run

$(TARGET1_PATH): $(SRCS1) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET1_PATH) $(SRCS1)

run: $(TARGET1_PATH)
	$(RUN_CMD)$(TARGET1)$(EXE_EXT)

clean:
	$(RM) $(TARGET1_PATH) 


