all:	car

car: main.o	Car.o
	g++ -o car  main.o  Car.o 

main.o:  main.cpp Car.h
	g++ -c main.cpp

Car.o: Car.cpp Car.h
	g++ -c Car.cpp

clean:
	rm -f car
	rm -f *.o
