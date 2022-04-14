all: main.o classA.o
	g++ -g main.o classA.o -o project_test

classA.o: classA.cpp
	g++ -c classA.cpp

main.o: main.cpp
	g++ -c main.cpp