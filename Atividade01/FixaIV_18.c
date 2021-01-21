/* 18. Uma empresa decide dar um aumento de 4% aos funcionários cujo salário é
inferior a 500 reais. Escreva um algoritmo que receba o salário de um funcionário e
imprima o valor do salário reajustado ou uma mensagem caso o funcionário não tenha
direito ao aumento */

#include <stdio.h>

int main(){

    float salario;

    //Entrada de Dados
    printf("\nInforme o salario do funcionario: ");
    scanf("%f", &salario);

    //Processamento e Saida de Dados
    if (salario < 500) {
        salario = salario * 1.04; 
        printf("O novo salario do funcionario sera de R$%.2f\n", salario); //Novo salario
    }   

    else {
        printf("O funcionario nao tem direito ao aumento!\n");
    }

}