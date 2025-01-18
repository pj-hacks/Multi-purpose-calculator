CC = gcc
CFLAGS = -Wall -g

# Find all .c files and create object files
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

# Build the program
program: $(OBJ)
	@$(CC) $(CFLAGS) -o program $(OBJ) -lm

# Clean rule
clean:
	@rm -f $(OBJ) program
