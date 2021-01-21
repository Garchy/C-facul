#include <stdio.h>

int main(){

    float salario, salMin, qtdSalMin;

    //Entrada de Dados
    printf("\nDigite o valor do salario minimo: ");
    scanf("%f", &salMin);

    printf("Digite o valor do salario do funcionario: ");
    scanf("%f", &salario);

    //Processamento de Dados
    qtdSalMin = (salario/salMin);

    //Saida de Dados
    printf("Esse funcionario recebe cerca de %.1f salario(s) minimo(s)\n", qtdSalMin);

}

