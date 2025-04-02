#include <stdio.h>


int main(){
    //Variaveis
    int valorX;
    int valorY;
    int temporario;


    printf("Digite valor de X e Y: \n");
    scanf("%i %i", &valorX, &valorY);

    temporario = valorX;
    valorX = valorY;
    valorY = temporario;

    printf("Valor de X é: %i \n", valorX);
    printf("Valor de Y é: %i \n", valorY);

    return 0;

}