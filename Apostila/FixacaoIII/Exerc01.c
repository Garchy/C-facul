#include <stdio.h>

int main(){
    int num1, num2;

    //Entrada de Dados
    printf("Digite dois valores inteiros: ");
    scanf("%i%i", &num1, &num2);

    //Processamento e Saída de Dados
    printf("\nA soma entre eles e: %i", num1 + num2);
    printf("\nA subtracao entre eles e: %i", num1 - num2);
    printf("\nA multiplicacao entre eles e: %i", num1 * num2);
    printf("\nA divisao entre eles e: %i", num1 / num2);
}