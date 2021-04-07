hello: hello.c

scan: scanf.c

hasard: hasard.c




all:
	rm scan
	rm hasard
	rm hello
	gcc -o hello hello.c
	gcc -o scan scanf.c
	gcc -o hasard hasard.c
