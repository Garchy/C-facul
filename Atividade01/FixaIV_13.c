/* 13. Faça um algoritmo que calcule e imprima o desconto do salário de um
funcionário, sabendo que:
a. se salário < R$ 1000, 00, desconto de 5% sobre o salário;
b. se salário >= R$ 1000, 00 e <= R$2000,00, desconto de 10% sobre o
salário;
c. se salário > R$ 2000, 00, desconto de 15% sobre o salário; */

#include <stdio.h>

int main(){

    float salario;

    //Entrada de Dados
    printf("\nDigite o salario do funcionario: ");
    scanf("%f", &salario);

    //Processamento de Dados
    if(salario < 1000){
        salario = salario * 0.95;
    }

    else {
        if (salario < 2000){    //Evitando redundancias como ((Salario > 1000) && (salario < 2000))
            salario = salario * 0.9;
        }

        else {
        salario = salario * 0.85;
        }
    } 

    //Saida de Dados
    printf("\nApos o desconto, o salario do funcionario sera de R$%.2f\n", salario);

}