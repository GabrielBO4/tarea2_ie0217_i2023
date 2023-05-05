# Se define el compilador que utilizaremos
CXX = g++

# Se definen las opciones que pasaremos al compilador
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Se define el nombre del archivo ejecutable
TARGET = exceptions

# Lista de archivos fuente
SRCS = exceptions.cpp main.cpp

# Regla de compilación principal
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)

# Regla para limpiar los archivos objeto y el archivo ejecutable
clean:
	rm -f $(TARGET) *.o
