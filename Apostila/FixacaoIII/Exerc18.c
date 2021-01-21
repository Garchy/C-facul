#include <stdio.h>

int main(){

    float peso, pesoGramas, novoPeso;

    //Entrada de Dados
    printf("\nInforme o peso de uma pessoa em Kg: ");
    scanf("%f", &peso);

    //Processamento de Dados
    pesoGramas = peso * 1000;
    novoPeso = peso * 1.05;

    //Saida de Dados
    printf("\n%.2f quilos equivalem a %.2f gramas.", peso, pesoGramas);
    printf("\nCaso essa pessoa engorde 5%, ela pesara %.2f Kg.\n", novoPeso);
}
