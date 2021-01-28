#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "header.h"


void write_regis() {
    struct registry reg; //registro principal

	struct tm *tp;
	time_t segundos;
	time(&segundos);
	tp = localtime(&segundos);

    printf("Nom: \n");
	fflush(stdout);
	gets(reg.name);
	printf("Adreça: \n");
	fflush(stdout);
	gets(reg.address);
	printf("Telèfon: \n");
	fflush(stdout);
	scanf("%ld", &reg.phoneNumber);
    while (reg.phoneNumber==0) {
        printf("Introdueix un numero correcte: ");
        fflush(stdin);
        scanf("%ld", &reg.phoneNumber);
    }
    fflush(stdin);
	reg.stDate.day= tp->tm_mday;
	reg.stDate.month = tp->tm_mon;
	reg.stDate.year = tp->tm_year+1900;
	reg.stDate.hour = tp->tm_hour;
	reg.stDate.minutes = tp->tm_min;
	reg.stDate.seconds = tp->tm_sec;
	printf("%s, %s, %ld, %d/%d/%d %d:%d:%d \n", reg.name, reg.address, reg.phoneNumber, reg.stDate.day, reg.stDate.month, reg.stDate.year, reg.stDate.hour, reg.stDate.minutes, reg.stDate.seconds);
}

void input_file() {
    struct registry reg;
    FILE *stream;
    char content[80];

    stream=fopen("fitxer.txt", "w");
    strcpy(content, reg.name);
    if (stream==0) {
        perror("Error");
        exit(0);
    }
    else {
        fputs(content, stream);
    }
    fclose(stream);
}