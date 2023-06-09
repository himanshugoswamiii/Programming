CC = gcc
CFLAGS = $(shell pkg-config --cflags gtk4)
LDFLAGS = $(shell pkg-config --libs gtk4)
TARGET = hello-world-gtk

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(TARGET)
