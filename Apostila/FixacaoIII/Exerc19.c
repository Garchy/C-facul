#include <stdio.h>

int main(){

    float a, b, c, X;

    //Entrada de Dados
    printf("\nPara a equacao: X = ((a + (2* b + c) * c) / a *a)\n");
    printf("Digite valores para a, b e c, respectivamente: ");
    scanf("%f%f%f", &a, &b, &c);

    //Processamento de Dados
    X = ((a + (2* b + c) * c) / a*a);

    //Saida de Dados
    printf("Para a = %.2f, b = %.2f e c = %.2f, o valor de X e %.2f\n", a, b, c, X);

}