#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "header.h"
#include "function.c"



void main () {
    char ans; //respuesta y/n
    struct registry rg;
    do{
        write_regis(&rg);
        printf("Vols afegir un altre registre? (y/n): \n");
        fflush(stdout);
        ans = getchar();
        fflush(stdin);
        
        test_header();
        input_file(&rg);
    } while (ans == 'y');
}

