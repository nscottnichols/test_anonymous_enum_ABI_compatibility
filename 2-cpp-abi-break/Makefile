CXX ?= c++
CXXFLAGS ?= -O2 -Wall -Wextra -Iinclude

.PHONY: all clean run
all: libapp app.e

libapp: src/lib.cpp include/api_v1.hpp
	$(CXX) $(CXXFLAGS) -c src/lib.cpp -o lib.o
	ar rcs libenumxx.a lib.o

app.e: app/app.cpp include/api_v2.hpp
	$(CXX) $(CXXFLAGS) app/app.cpp -L. -lenumxx -o app.e

run: all
	./app.e

clean:
	rm -f lib.o libenumxx.a app.e

