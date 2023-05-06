# Se define el compilador que utilizaremos
CXX = g++

# Se definen las opciones que pasaremos al compilador
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Se define el nombre del archivo ejecutable
TARGET = stackTemplate

# Lista de archivos fuente
SRCS = stackTemplate.cpp

# Regla de compilación principal
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(TARGET)
	./stackTemplate

# Regla para limpiar los archivos objeto y el archivo ejecutable
clean:
	rm -f $(TARGET) *.o
