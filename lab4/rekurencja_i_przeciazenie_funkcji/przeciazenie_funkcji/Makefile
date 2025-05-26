CXX = g++
CXXFLAGS = -Wall -Wextra -Wno-division-by-zero

BIN_DIR = bin

all: $(BIN_DIR) $(BIN_DIR)/task1

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/task1: task1.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(BIN_DIR)
