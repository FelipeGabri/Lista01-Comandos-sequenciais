#include <stdio.h>

int main(){

    float preco;
    float desconto;

    printf("Informe o preço do produto: \n");
    scanf("%f", &preco);

    printf("Informe o desconto que irá ser aplicado: \n");
    scanf("%f", &desconto);

    printf("O preço final do produto será de R$%.2f", preco - (preco * desconto/100));

    return 0;
}