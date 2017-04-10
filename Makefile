TARGET = millipede
CC = gcc
CFLAGS = -g -Wall
OBJECTS = millipede.o

default: $(TARGET)

all: default

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	gcc $(OBJECTS) -o $@

clean:
	rm -f millipede.o
	rm -f millipede
