OBJECTS=List.o OList.o Node.o
CXXFLAGS=-g

main: main.o $(OBJECTS)
	g++ -g -o main main.o $(OBJECTS)

tests: tests.o $(OBJECTS)
	g++ -o tests tests.o $(OBJECTS)

List.o: List.cpp Node.h List.h

OList: OList.cpp Node.h OList.h

main.o: main.cpp List.h Node.h

Node.o: Node.cpp Node.h

tests.o: tests.cpp
	g++ -c -std=c++11 tests.cpp

clean:
	rm -f $(OBJECTS) tests.o main.o
