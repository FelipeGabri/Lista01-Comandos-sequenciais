#include <stdio.h>


int main(){
    //Constante
    const valorCafe = 7;
    //Variaveis
    int dinheiro;
    int troco;
    int valorTotal;
    int quantCafe;

    while (1)
    {
        printf("Quantos cafés você vai querer? \n");
        scanf("%i", &quantCafe);
    
        valorTotal = quantCafe * valorCafe;
        
        printf("Deu R$%i , quantas notas de R$5 irá inserir? \n", valorTotal);
    
        scanf("%i", &dinheiro);
        dinheiro = dinheiro * 5;
    
        if (dinheiro >= valorTotal && (dinheiro % 5) == 0)
        {
            troco = dinheiro - valorTotal;
            printf("Compra efetuado com sucesso! \n");
            printf("Troco perdido foi R$%i \n", troco);
            break;
    
        } else {
            printf("Dinheiro insuficiente \n");
        }
    
    
    }

    return 0;

}