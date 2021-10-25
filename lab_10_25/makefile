all:	main

main: main.o	Pet.o	Dog.o
	g++ -o main  main.o  Pet.o	Dog.o

main.o:  main.cpp	Pet.h	Dog.h
	g++ -c main.cpp

Pet.o: Pet.cpp	Pet.h
	g++ -c Pet.cpp

Dog.o: Dog.cpp	Dog.h
	g++ -c Dog.cpp

clean:
	rm -f main
	rm -f *.o
