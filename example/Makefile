CC=gcc
CFLAGS=-g -Wall -fno-stack-protector
LDFLAGS=
OBJECTS=main.o
TARGET=example

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(TARGET) *.o
