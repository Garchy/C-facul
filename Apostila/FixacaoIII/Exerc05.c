#include <stdio.h>

int main(){
    
    int num1, num2;

    //Entrada de Dados
    printf("Digite dois valores inteiros: ");
    scanf("%i%i", &num1, &num2);

    //Processamento e saída de dados
    printf("\nA soma dos dois numeros e %25i", num1 + num2);
    printf("\nA subtracao do primeiro pelo segundo e  %11i", num1 - num2);
    printf("\nA subtracao do segundo pelo primeiro e %12i", num2 - num1);
    printf("\nA multiplicacao dos dois numeros e %16i", num1 * num2);
    printf("\nA divisao real do primeiro pelo segundo %11.2f", (num1 * 1.0) / num2);
    printf("\nA divisao real do segundo pelo primeiro %11.2f", (num2 * 1.0) / num1);
    printf("\nA divisao inteira do primeiro pelo segundo  %7i", num1 / num2);
    printf("\nA divisao inteira do segundo pelo primeiro  %7i", num2 / num1);
    printf("\nO resto da divisao do primeiro pelo segundo %7i", num1 % num2);
    printf("\nO resto da divisao do segundo pelo primeiro %7i", num2 % num1);    
    
}