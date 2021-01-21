#include <stdio.h>

int main(){

    int num1, num2, num3;
    //Entrada de Dados
    printf("\nDigite dois valores inteiros: ");
    scanf("%i%i", &num1, &num2);

    printf("\nValores recebidos: num1 = %i e num2 = %i", num1, num2);
    
    //Processamento de Dados
    num3 = num1;
    num1 = num2;
    num2 = num3;

    //Saída de Dados
    printf("\nTrocando os valores: num1 = %i e num2 = %i", num1, num2);

}