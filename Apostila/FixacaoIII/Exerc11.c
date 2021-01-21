#include <stdio.h>

int main(){

    int num, tab;

    //Entrada de Dados
    printf("\nDigite um numero para a tabuada: ");
    scanf("%i", &num);

    //Processamento e saida de dados
    for (tab = 1 ; tab <=10 ; tab++) {
        printf("\n%3i x %2i = %3i", num, tab, tab * num);
    }   
}