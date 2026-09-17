all: magus

CC = clang
override CFLAGS += -g -Wno-everything -pthread -lm

magus: magus.c
	$(CC) $(CFLAGS) magus.c -o "$@"

clean:
	rm -f magus
