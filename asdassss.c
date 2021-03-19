/*
 ============================================================================
 Name        : BRUH.c
 Author      : as
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define ACCO 2

int main(void) {
	    int num;
	    float resultado;
	    int acu=0;
	    int i;

	    for(i = 0;i<ACCO;i++)
	    {

	     printf("Introduzca numero: ");
	     scanf("%d",&num );
	     acu = acu + num;

	    }

	    resultado= (float)acu/(float)i;

		printf( "\nPromedio: %f",  resultado );
	    return EXIT_SUCCESS;
}

