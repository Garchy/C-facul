#include <stdio.h>

int main(){

    float salario, novoSalario;

    //Entrada de Dados
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);

    //Processamento de Dados
    novoSalario = salario * 1.25;

    //Saida de Dados
    printf("O novo salario deste funcionario sera de R$%.2f\n ", novoSalario);

}