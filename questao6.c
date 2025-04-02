#include <stdio.h>

int main(){

    float aquisicao;
    float venda;

    printf("Informe o valor de aquisição do produto: \n");
    scanf("%f", &aquisicao);

    printf("Informe o valor de venda do produto: \n");
    scanf("%f", &venda);

    printf("O lucro obtido foi de R$%.2f", venda - aquisicao);



    return 0;
}