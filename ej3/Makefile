CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Wpedantic -g
SRC = example/main.cpp
OUT = ejec

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
