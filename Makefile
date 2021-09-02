CXX = g++
FLAGS = -std=c++17 -pedantic -Wpedantic -Wall -Werror -g
LIBS = -lstdc++fs

Herve: main.cpp cpu.cpp cpu.h mem.cpp mem.h
	$(CXX) $(FLAGS) $^ -o $@ $(LIBS)

.PHONY: clean

clean:
	rm -f Herve