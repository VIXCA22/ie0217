
CC = g++
CFLAGS = -Wall
TARGET1 = ArbolBST
TARGET2 = Cancionero

SRCS1 = src/main.cpp 
SRCS2 = src/main2.cpp src/ListaEnlazada.cpp
HEADERS = src/ArbolBinarioBusqueda.hpp src/NodoArbol.hpp src/Nodo.hpp src/NodoArbol.hpp src/ListaEnlazada.hpp src/Cancion.hpp

ifeq ($(OS),Windows_NT)
    EXE_EXT = .exe
    RM = cmd /c del /Q /F
    TARGET_DIR = build/
    RUN_CMD = $(TARGET_DIR)
    TARGET1_PATH := $(subst /,\,$(TARGET_DIR)$(TARGET1)$(EXE_EXT))
    TARGET2_PATH := $(subst /,\,$(TARGET_DIR)$(TARGET2)$(EXE_EXT))
else
    EXE_EXT =
    RM = rm -f
    TARGET_DIR = build/
    RUN_CMD = $(TARGET_DIR)
    TARGET1_PATH := $(TARGET_DIR)$(TARGET1)$(EXE_EXT)
    TARGET2_PATH := $(TARGET_DIR)$(TARGET2_PATH)$(EXE_EXT)
endif

all: $(TARGET1_PATH) $(TARGET2_PATH)  run

$(TARGET1_PATH): $(SRCS1) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET1_PATH) $(SRCS1)

$(TARGET2_PATH): $(SRCS2) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET2_PATH) $(SRCS2)


make: $(TARGET1_PATH)
	$(RUN_CMD)$(TARGET1)$(EXE_EXT)

make2: $(TARGET2_PATH)
	$(RUN_CMD)$(TARGET2)$(EXE_EXT)

clean:
	$(RM) $(TARGET1_PATH) $(TARGET2_PATH)


