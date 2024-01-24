CC=gcc
CFLAGS=-g -Wall -fno-stack-protector -m32
LDFLAGS=
OBJECTS=main.o
TARGET=argcrack

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(TARGET) *.o
