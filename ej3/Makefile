CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Iincludes
SRC = example/main.cpp
OUT = programa

all: $(OUT)

$(OUT): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
