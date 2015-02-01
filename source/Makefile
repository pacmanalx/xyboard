all:	main

main: 	main.o virtualscreen.o vector.o dda.o context.o
	gcc main.o virtualscreen.o vector.o dda.o context.o -o main
	./compile

main.o:	main.c
	gcc -c main.c

virtualscreen.o: virtualscreen.c
	gcc -c virtualscreen.c

vector.o: vector.c
	gcc -c vector.c

dda.o: 	dda.c
	gcc -c dda.c

context.o: context.c
	gcc -c context.c

clean:
	rm *o main

