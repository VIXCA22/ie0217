
CC = g++
CFLAGS = -Wall
TARGET1 = conversion
TARGET2 = calculadora

SRCS1 = src/main1.cpp src/Funciones1.cpp
SRCS2 = src/main2.cpp src/Funciones2.cpp
HEADERS = src/Conversiones.hpp src/Funciones1.hpp src/Funciones2.cpp

ifeq ($(OS),Windows_NT)
    EXE_EXT = .exe
    RM = cmd /c del /Q /F
    TARGET_DIR = src/
    RUN_CMD = $(TARGET_DIR)
    TARGET1_PATH := $(subst /,\,$(TARGET_DIR)$(TARGET1)$(EXE_EXT))
    TARGET2_PATH := $(subst /,\,$(TARGET_DIR)$(TARGET2)$(EXE_EXT))
else
    EXE_EXT =
    RM = rm -f
    TARGET_DIR = src/
    RUN_CMD = $(TARGET_DIR)
    TARGET1_PATH := $(TARGET_DIR)$(TARGET1)$(EXE_EXT)
    TARGET2_PATH := $(TARGET_DIR)$(TARGET2_PATH)$(EXE_EXT)
endif

all: $(TARGET1_PATH) $(TARGET2_PATH)  run

$(TARGET1_PATH): $(SRCS1) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET1_PATH) $(SRCS1)

$(TARGET2_PATH): $(SRCS2) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET2_PATH) $(SRCS2)


run: $(TARGET1_PATH)
	$(RUN_CMD)$(TARGET1)$(EXE_EXT)

run2: $(TARGET2_PATH)
	$(RUN_CMD)$(TARGET2)$(EXE_EXT)

clean:
	$(RM) $(TARGET1_PATH) $(TARGET2_PATH)


