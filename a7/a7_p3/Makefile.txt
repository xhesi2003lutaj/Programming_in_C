#   -*- Makefile.txt   -*-

#target:   dependencies


main:  use_linked_list.o linked_list.o
	gcc -Wall -o main use_linked_list.o linked_list.o


main.o: linked_list.h linked_list.c
	gcc -Wall -c use_linked_list.c


compileonly: use_linked_list.o linked_list.o


deleteofiles:
	rm -f *.o

deleteexec:
	rm -f main

deleteall: deleteexec deleteofiles

createdir:
	mkdir test_directory

deletedir:
	rmdir test_directory

