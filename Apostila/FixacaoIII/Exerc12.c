#include <stdio.h>
#include <math.h>

int main(){

    float lado, volume;

    //Entrada de Dados
    printf("\nDigite um valor para o lado do cubo: ");
    scanf("%f", &lado);

    //Processamento de Dados
    volume = pow(lado, 3);

    //Saida de dados
    printf("Um cubo de lado %.2f tem volume igual a %.2f u.m.\n", lado, volume);

}