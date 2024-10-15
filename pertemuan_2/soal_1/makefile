CC = g++
CFLAGS = -Wall
SRC = main.cpp 
TARGET = main.exe

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)
	if [ -d "actual" ]; then rm -rf actual; fi

test: $(TARGET)
	@i=1; \
	while true; do \
		if [ -f tests/$$i.txt ]; then \
			echo "Test Case $$i"; \
			if [ ! -f actual/$$i.txt ]; then \
				mkdir actual -p && touch actual/$$i.txt; \
			fi; \
			./$(TARGET) < tests/$$i.txt > actual/$$i.txt; \
			echo "Input:" ; \
			cat tests/$$i.txt; \
			echo ""; \
			echo "Expected Output:"; \
			cat expected/$$i.txt; \
			echo "Actual Output:"; \
			cat actual/$$i.txt; \
			diff -q actual/$$i.txt expected/$$i.txt && echo "Test $$i sukses" || echo "Test $$i gagal"; \
			echo ""; \
			i=$$((i + 1)); \
		else \
			break; \
		fi; \
	done