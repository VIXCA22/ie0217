CC = g++
CFLAGS = -Wall
TARGET1 = Implementaciones

EXE_EXT = 
TARGET_DIR = build

# Rutas de los archivos fuente y cabecera
SRCS1 = src/main.cpp
HEADERS = src/implementaciones.hpp

# Ruta completa al ejecutable
TARGET1_PATH := $(TARGET_DIR)/$(TARGET1)$(EXE_EXT)

# Verificar si estamos en Windows
ifeq ($(OS),Windows_NT)
    EXE_EXT = .exe
    RM = cmd /c del /Q /F
    MKDIR = if not exist $(TARGET_DIR) mkdir $(TARGET_DIR)
else
    RM = rm -f
    MKDIR = mkdir -p $(TARGET_DIR)
endif

# Regla principal
all: create_dir $(TARGET1_PATH) run

# Crear el directorio de construcción
create_dir:
	$(MKDIR)

# Compilar el primer programa
$(TARGET1_PATH): $(SRCS1) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET1_PATH) $(SRCS1)

# Ejecutar el programa
run: $(TARGET1_PATH)
	$(TARGET1_PATH)

# Limpiar archivos generados
clean:
	$(RM) $(TARGET1_PATH)
