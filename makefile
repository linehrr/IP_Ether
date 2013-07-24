all: ht_bin

ht_bin: ht.o unittest.o
	gcc -o ht -g ht.o unittest.o

ht.o: ht.c
	gcc -o ht.o -c ht.c

unittest.o: unittest.c
	gcc -o unittest.o -c unittest.c

clean:
	rm -f ht.o unittest.o ht

