CXX ?= c++
CC ?= cc
CXXFLAGS ?= -O2 -Wall -Wextra -Iinclude
CFLAGS ?= -O2 -Wall -Wextra -Iinclude

.PHONY: all clean run
all: libapp app

libapp: src/lib.cpp include/api_stable.h
	$(CXX) $(CXXFLAGS) -c src/lib.cpp -o lib.o
	ar rcs libstable.a lib.o

app: app/app.c include/api_stable.h
	$(CC) $(CFLAGS) app/app.c -L. -lstable -lstdc++ -o app

run: all
	./app

clean:
	rm -f lib.o libstable.a app

