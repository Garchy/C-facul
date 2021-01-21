/*  06. No curso de Introdução a Computação, a nota final do estudante é calculada a partir
de 3 notas atribuídas respectivamente a um trabalho de laboratório, a uma avaliação
semestral e a um exame final. As notas variam de 0 a 10 e a nota final é a média
ponderada das 3 notas mencionadas. A tabela abaixo fornece os pesos das notas:
trabalho de laboratório - peso 2
avaliação semestral - peso 3
exame final - peso 5
Faça um algoritmo que receba as 3 notas, calcule e imprima a média final e o
conceito desse estudante. O conceito segue a tabela abaixo:
    Média Final             Conceito
    8.0 |___| 10.0              A
    7.0 |___ 8.0                B
    6.0 |___ 7.0                C
    5.0 |___ 6.0                D
    < 5.0                       E                                                     */

#include <stdio.h>

int main(){

    float ntLab, ntAva, ntExam, media;
    char conceito;

    //Entrada de Dados
    printf("\nNota do trabalho de Laboratorio: ");
    scanf("%f", &ntLab);

    printf("Nota da Avaliacao Semestral: ");
    scanf("%f", &ntAva);

    printf("Nota do Exame Final: ");
    scanf("%f", &ntExam);

    //Processamento de Dados
    media = (ntLab * 2 + ntAva * 3 + ntExam * 5)/10; //Calculo da media ponderada
    
    if (media < 5) // Começando do menor para poder simplificar
        conceito = 'E';

        else 
            if (media < 6)
                conceito = 'D';

                else
                    if (media < 7)
                    conceito = 'C';

                    else
                        if (media < 8)
                        conceito = 'B';

                        else //caso a media seja maior que 8
                            conceito = 'A';

    //Saida de Dados
    printf("\nA media final deste aluno e %.2f e seu conceito e %c\n", media, conceito);
                    

}
