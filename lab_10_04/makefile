all:	itemnode

itemnode: main.o
	g++ -o itemnode  main.o

main.o:  main.cpp ItemNode.h
	g++ -c main.cpp

clean:
	rm -f itemnode
	rm -f *.o