#include <stdio.h>

int main(){

    int tamanho, internet;

    printf("Informe o tamanho do seu arquivo em MB: \n");
    scanf("%i", &tamanho);

    printf("Informe a velocidade de sua internet em Mbps: \n");
    scanf("%i", &internet);

    printf("O tempo de seu download será de %i segundos \n", (tamanho/internet)*8);
    


    return 0;
}