#include <stdio.h>

float celsius, fahren;

int main(){

    //Entrada de Dados
    printf("\nConversor de temperatura Fahrenheit para Celsius");
    printf("\nDigite o valor em Fahrenheit: ");
    scanf("%f", &fahren);

    //Processamento de Dados
    celsius = (fahren - 32) * (5 / 9.0);

    //Saída de Dados
    printf("A temperatura equivalente em Celsius e %.2f Graus.", celsius);

}