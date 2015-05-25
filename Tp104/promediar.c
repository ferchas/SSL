/*
* De Caro Fernando
* 22-05-2015
* Curso K2051
*/

#include <stdio.h> /* getchar EOF feof perror printf */
#include <stdlib.h> /* EXIT_SUCCESS */

int main(void) {
	int nl; /* la cantidad de lineas */
	int nc; /* la cantidad de caracteres */
	int c; /* el caracter leido */
	
	for(nl = 0, nc = 0; ( c = getchar()) != EOF; ++nc)
		if(c == '\n')
			++nl;
	
	if( !feof(stdin) )
		perror("No se pudo seguir leyendo de la entrada debido a un error");

	printf("Longitud promedio: %.1f\n", nc / (float)nl );
	
	return EXIT_SUCCESS;
}
