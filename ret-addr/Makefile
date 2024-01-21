CC=gcc
CFLAGS=-g -Wall -fno-stack-protector -no-pie
LDFLAGS=
OBJECTS=main.o
TARGET=ret-addr

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(LDFLAGS) -o $@ $(OBJECTS)

clean:
	rm -f $(TARGET) *.o
