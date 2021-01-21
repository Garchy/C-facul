#include <stdio.h>

int main(){

    float salario, imposto;

    //Entrada de Dados
    printf("\nDigite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    //Processamento de Dados
    imposto = salario * 0.05;

    //Saida de Dados
    printf("Este funcionario pagara cerca de R$%.2f de imposto de renda.\n", imposto);

}