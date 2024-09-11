# Variables
CC = g++
CFLAGS = -Wall -fdiagnostics-color=always -fno-optimize-sibling-calls -fno-strict-aliasing -lm -s -Wl,--stack=268435456 -g -O2 -std=c++17
SRC = main.cpp 
TARGET = main.exe

all: $(TARGET) run

# Rule to create the executable
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
