/* 21. Faça um algoritmo que receba a altura e o sexo de uma pessoa, calcule e
imprima o seu peso ideal, utilizando as fórmulas abaixo. Assuma M ou F como sendo os
valores válidos para o sexo de uma pessoa.
para homens: (72.7 * ALTURA) – 58
para mulheres: (62.1 * ALTURA) – 44.7 */

#include <stdio.h>

int main(){

    char sexo;
    float altura, pesoIdeal;

    //Entrada de Dados
    printf("\nInforme o sexo [M] ou [F]: ");
    scanf("%c", &sexo);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    //Processamento e Saida de Dados
    if ((sexo == 'M') || (sexo == 'm')) { //Letras maiusculas e minusculas
        pesoIdeal = (72.7 * altura) - 58;
        printf("\nSeu peso ideal e de aproximadamente %.2fKg\n", pesoIdeal); //Peso Ideal para Homens
    }

    else {
        if ((sexo == 'F') || (sexo == 'f')) {
            pesoIdeal = (62.1 * altura) - 44.7;
            printf("Seu peso ideal e de aproximadamente %.2fKg\n", pesoIdeal); //Peso ideal para Mulheres
        }
    }
    
}