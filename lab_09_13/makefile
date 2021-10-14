all:	triangle

triangle: main.o	Triangle.o
	g++ -o triangle  main.o  Triangle.o 

main.o:  main.cpp Triangle.h
	g++ -c main.cpp

Triangle.o: Triangle.cpp Triangle.h
	g++ -c Triangle.cpp

clean:
	rm -f triangle
	rm -f *.o
