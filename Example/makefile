all: shoot.o
	g++ -o example.out example.cpp shoot.o

shoot.o: shoot.cpp shoot.h
	g++ -c -o shoot.o shoot.cpp

clean:
	rm *.o *.out *.html