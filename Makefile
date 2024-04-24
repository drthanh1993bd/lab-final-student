CC=gcc
CFLAGS=-g -Wall

all: fizzbuzz array_structures linked_list

fizzbuzz: fizzbuzz.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@

array_structures: array_structures.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@

linked_list: linked_list.c
	$(CC) $(CFLAGS) $^ -o $@
	./$@

clean:
	rm fizzbuzz array_structures linked_list
	rm -r *.dSYM
