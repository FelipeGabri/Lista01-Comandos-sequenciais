#include <stdio.h>

int main(){

    float nota1, nota2, nota3, nota4;
    float mediaFinal;
    int peso1, peso2, peso3, peso4;


    printf("Digite as 4 notas: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    printf("Digite os pesos das notas: \n");
    scanf("%i %i %i %i", &peso1, &peso2, &peso3, &peso4);

    mediaFinal = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3) + (nota4 * peso4)) / 4;

    printf("Média Final: %.2f\n", mediaFinal);



    return 0;
}