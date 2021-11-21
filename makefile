all: runlib connections

runlib: libEx2.a
libEx2.a: my_mat.o
	ar -rcs libEx2.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

connections:main.o libEx2.a
	gcc -Wall -o connections main.o libEx2.a

.PHONY: clean all

clean:
	rm -f *.o *.a connections
