# Define variables
CC = gcc
CFLAGS = -Wall -g
LIBRARY = libmath1.a
OBJECTS = math1.o main.o

# Rule for building the static library
$(LIBRARY): math1.o
    ar rcs $(LIBRARY) math1.o

# Rule for compiling math1.o
math1.o: math1.c math1.h
    $(CC) $(CFLAGS) -c math1.c

# Rule for compiling main.o
main.o: main.c math1.h
    $(CC) $(CFLAGS) -c main.c

# Rule for linking the executable
test: $(OBJECTS) $(LIBRARY)
    $(CC) $(CFLAGS) $(OBJECTS) -L. -lmath1 -o test

# Clean up the generated files
clean:
    rm -f *.o $(LIBRARY) test
