hello:	 	hello.c

scanf: 		scanf.c

hasard: 	hasard.c


carre: 		carre.c

tableau: 	tableau.c



all:
	rm scanf
	rm hasard
	rm hello
	rm carre
	rm tableau
	gcc -o hello hello.c
	gcc -o scanf scanf.c
	gcc -o hasard hasard.c
	gcc -o carre carre.c
	gcc -o tableau tableau.c
