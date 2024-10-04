CC = g++
CFLAGS = -Wall

# Nombres de los ejecutables
TARGET1 = Implementaciones
TARGET2 = Simulador

# Extensión del ejecutable (dependiendo del sistema operativo)
EXE_EXT =
TARGET_DIR = build

# Rutas de los archivos fuente y cabecera para ambos programas
SRCS1 = src/main.cpp
SRCS2 = src/main2.cpp 
HEADERS = src/implementaciones.hpp src/Tarea.hpp src/Proyecto.hpp

# Ruta completa a los ejecutables
TARGET1_PATH := $(TARGET_DIR)/$(TARGET1)$(EXE_EXT)
TARGET2_PATH := $(TARGET_DIR)/$(TARGET2)$(EXE_EXT)

# Verificar si estamos en Windows
ifeq ($(OS),Windows_NT)
    EXE_EXT = .exe
    RM = cmd /c del /Q /F
    MKDIR = if not exist $(TARGET_DIR) mkdir $(TARGET_DIR)
else
    EXE_EXT =
    RM = rm -f
    MKDIR = mkdir -p $(TARGET_DIR)
endif

# Regla para el primer programa (make)
make: create_dir $(TARGET1_PATH) run1

# Regla para el segundo programa (make2)
make2: create_dir $(TARGET2_PATH) run2

# Crear el directorio de construcción si no existe
create_dir:
	$(MKDIR)

# Compilar el primer programa
$(TARGET1_PATH): $(SRCS1) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET1_PATH) $(SRCS1)

# Compilar el segundo programa
$(TARGET2_PATH): $(SRCS2) $(HEADERS)
	$(CC) $(CFLAGS) -o $(TARGET2_PATH) $(SRCS2)

# Ejecutar el primer programa
run1: $(TARGET1_PATH)
	@echo "Ejecutando $(TARGET1)..."
	$(TARGET1_PATH)

# Ejecutar el segundo programa
run2: $(TARGET2_PATH)
	@echo "Ejecutando $(TARGET2)..."
	$(TARGET2_PATH)

# Limpiar los archivos generados
clean:
	$(RM) $(TARGET1_PATH) $(TARGET2_PATH)
