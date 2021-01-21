#include <stdio.h>

int main(){

    int tempo;
    float prestacao, valor, taxa=2;

    //Entrada de Dados
    printf("\nDigite o valor inicial da prestacao: ");
    scanf("%f", &valor);

    printf("Digite ha quantos dias esta atrasada: ");
    scanf("%i", &tempo);

    //Processamento de dados
    prestacao = (valor + (valor * (taxa/100)) * tempo);

    //Saída de dados
    printf("\nO valor dessa prestacao apos %i dias atrasados e de R$%.2f", tempo, prestacao);

}