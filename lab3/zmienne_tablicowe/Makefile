CXX = g++
CXXFLAGS = -Wall -Wextra -Wno-division-by-zero

BIN_DIR = bin

all: $(BIN_DIR) $(BIN_DIR)/task1 $(BIN_DIR)/task2 $(BIN_DIR)/task3

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(BIN_DIR)/task1: task1.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/task2: task2.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

$(BIN_DIR)/task3: task3.cpp
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(BIN_DIR)
