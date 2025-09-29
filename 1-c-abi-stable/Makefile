CC ?= cc
CFLAGS ?= -O2 -Wall -Wextra -Iinclude

.PHONY: all clean run
all: libapp app.e

libapp: src/lib.c include/api_v1.h
	$(CC) $(CFLAGS) -c src/lib.c -o lib.o
	ar rcs libenum.a lib.o

app.e: app/app.c include/api_v2.h
	$(CC) $(CFLAGS) app/app.c -L. -lenum -o app.e

run: all
	./app.e

clean:
	rm -f lib.o libenum.a app.e

