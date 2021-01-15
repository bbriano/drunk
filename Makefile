CC ?= gcc
DESTDIR ?= /usr/local/bin


all: drunkcase

drunkcase: drunkcase.c
	$(CC) $(CFLAGS) -o $@ $^


.PHONY: install clean

install: drunkcase
	install drunkcase $(DESTDIR)

clean:
	rm -f drunkcase
