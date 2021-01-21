#include <stdio.h>

int main(){

    float base, altura, area, perim;

    //Entrada de Dados
    printf("\nInforme o valor da base e altura do retangulo: ");
    scanf("%f%f", &base, &altura);

    //Processamento de Dados
    area = base * altura;
    perim = (2 * base) + (2 * altura);

    //Saida de Dados
    printf("A area desse retangulo e %.2f e seu perimetro vale %.2f u.m.\n", area, perim);

}