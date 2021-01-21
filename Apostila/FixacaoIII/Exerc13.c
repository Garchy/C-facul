#include <stdio.h>
#include <math.h>

int main(){

    int num;
    float raiz, poten;

    //Entrada de Dados
    printf("\nDigite um numero inteiro: ");
    scanf("%i", &num);

    //Processamento de Dados
    raiz = sqrt(num);
    poten = pow(num, 5);

    //Saida de dados
    printf("A raiz quadrada de %i e %.2f\n", num, raiz);
    printf("%i Elevado a quinta potencia e %.2f\n", num, poten);
}