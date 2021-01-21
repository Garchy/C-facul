#include <stdio.h>

int main()
{
    float larg, compr, area;

    //Entrada de Dados
    printf("\nInforme o valor da largura e do comprimento do retangulo: ");
    scanf("%f%f", &larg, &compr);

    //Processamento de Dados
    area = larg * compr;

    /*Saída de Dados */
    printf("Um retangulo de largura %.2f e comprimento %.2f tem area igual a %.2f u.m.\n", larg, compr, area);

}