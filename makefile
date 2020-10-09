all: switcheroo.o
	gcc -o switcheroo switcheroo.c
switcheroo.o: switcheroo.c
	gcc -c switcheroo.c 
clean:
	rm switcheroo switcheroo.o 

