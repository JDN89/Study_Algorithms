# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -g

# Source files
SOURCES = main.c table.c memory.c

# Target executable
EXECUTABLE = hashtable

# Default target
all: $(EXECUTABLE)

# Linking the target executable
$(EXECUTABLE): $(SOURCES)
	$(CC) $(CFLAGS) -o $@ $(SOURCES)

# Clean up build files
clean:
	rm -f $(EXECUTABLE)CC = gcc
