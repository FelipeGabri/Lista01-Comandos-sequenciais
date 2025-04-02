#include <stdio.h>


int main(){
    //Variaveis
    float distancia;
    float kmPorLitro;
    float litros;


    printf("Informe quantos km seu carro faz por litro: \n");
    scanf("%f", &kmPorLitro);

    printf("Informe a distancia do ponto A até o ponto B em km: \n");
    scanf("%f", &distancia);

    litros = distancia/kmPorLitro;
    printf("Você precisa de: %f litros de gasolina\n", litros);

    return 0;

}