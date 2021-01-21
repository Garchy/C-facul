#include <stdio.h>

int main(){

    int nr_coelhos;
    float custo;

    //Entrada de Dados
    printf("\nInforme o numero de coelhos: ");
    scanf("%i", &nr_coelhos);

    //Processamento de Dados
    custo = (nr_coelhos * 0.7) / 18 + 10;

    //Saída de Dados
    printf("O custo para a criacao de %i coelhos sera de R$%.2f.", nr_coelhos, custo);

}