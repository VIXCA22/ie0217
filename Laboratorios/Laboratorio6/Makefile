# Variables
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
SRCDIR = src
OBJDIR = obj
BINDIR = bin
TARGET = $(BINDIR)\text_processor.exe

# Archivos fuente y objetos
SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Reglas
all: $(TARGET)

$(TARGET): $(OBJECTS)
	@if not exist $(BINDIR) mkdir $(BINDIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@if not exist $(OBJDIR) mkdir $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	del /Q $(OBJDIR)\*.o
	del /Q $(TARGET)

run: $(TARGET)
	$(TARGET) data\file1.txt

.PHONY: all clean run
