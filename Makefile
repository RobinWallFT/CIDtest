all: main

main: main.c
	gcc -o main main.c

test: test.c
	gcc -o test test.c
	./test

clean:
	rm -f main test