# Variables
CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -g
SRC_DIR = src
INC_DIR = includes
EXAMPLES_DIR = examples
OBJS = $(SRC_DIR)/MedicionBase.o $(SRC_DIR)/Posicion.o $(SRC_DIR)/Presion.o $(SRC_DIR)/SaveFlightData.o
TARGET = main
MAIN = $(EXAMPLES_DIR)/main.cpp

# Regla por defecto
all: $(TARGET)

# Enlazar
$(TARGET): $(OBJS) $(MAIN)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(MAIN) $(OBJS)

# Compilar .cpp a .o
$(SRC_DIR)/%.o: $(SRC_DIR)/%.cpp $(INC_DIR)/%.h
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar archivos generados
clean:
	rm -f $(TARGET) $(SRC_DIR)/*.o
