#include <stdio.h>

int main(){

    int codigo;
    float horas, valorPorHora;

    printf("Informe seu código de funcionario: \n");
    scanf("%d", &codigo);

    printf("Informe o quanto você recebe por hora: \n");
    scanf("%f", &valorPorHora);
    
    printf("Informe suas horas trabalhadas: \n");
    scanf("%f", &horas);

    printf("Seu salário será de R$%.2f \n", horas * valorPorHora);
    printf("Seu código de funcionario é: %d \n", codigo);
    


    return 0;
}