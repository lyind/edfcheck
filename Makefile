.PHONY=all clean

all: edfcheck

edfcheck: src/edfcheck.c src/edflib.c src/edflib.h
	$(CC) -g -Wall -flto -D_LARGEFILE64_SOURCE -D_LARGEFILE_SOURCE -o $@ src/edflib.c src/edfcheck.c -static-libgcc

clean:
	rm -rf edfcheck

