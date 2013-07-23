
all: diffe simme

diffe: main.o diffe.o
	g++ -o diffe main.o diffe.o

simme: main.o simme.o
	g++ -o simme main.o simme.o

main.o:
	g++ -o main.o -c -std=c++0x main.cpp

diffe.o:
	g++ -o diffe.o -c -std=c++0x diffe.cpp

simme.o:
	g++ -o simme.o -c -std=c++0x simme.cpp

clean:
	rm -rf *.o diffe simme

install:
	cp diffe /usr/sbin/
	cp simme /usr/sbin/

remove:
	rm /usr/sbin/diffe
	rm /usr/sbin/simme
