# Variables
CC = gcc
CFLAGS = -Wall -Wno-deprecated-declarations -I. -I/opt/homebrew/opt/csfml/include
LDFLAGS = -L/opt/homebrew/opt/csfml/lib -lcsfml-graphics -lcsfml-window -lcsfml-system
TARGET = main
SRC = main.c library.c

# Default rule to compile the program
all: $(TARGET)

# Rule to build the target
$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) $(LDFLAGS) -o $(TARGET)

# Clean rule to remove the generated files
clean:
	rm -f *.o $(TARGET)
