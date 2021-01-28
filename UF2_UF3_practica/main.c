#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "header.h"
#include "function.c"

void main () {
    char ans; //respuesta y/n
	do{
        write_regis();
        printf("Vols afegir un altre registre? (y/n): \n");
	    fflush(stdout);
	    ans = getchar();
	    fflush(stdin);
		
		input_file();
	} while (ans == 'y');
}