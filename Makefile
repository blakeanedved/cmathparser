all: main.*

cpp: main.cpp
	g++ main.cpp

c: main.c
	gcc main.c

clean:
	rm -rf a.out
