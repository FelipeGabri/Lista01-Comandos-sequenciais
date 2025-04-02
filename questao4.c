#include <stdio.h>


int main(){
    //Variaveis
    int dias;
    int semanas;
    int diasProvas;


    printf("Informe quantos dias falta para a prova de programação 1: \n");
    scanf("%i", &diasProvas);

    semanas = diasProvas / 7;
    dias = diasProvas % 7;

    printf("Falta %i dia/s e %i semana/s\n", dias, semanas);

    return 0;

}