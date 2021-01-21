#include <stdio.h>

int main(){

int peso1, peso2;
float nota1, nota2, media;

//Entrada de dados
printf("\nInforme as duas notas do aluno: ");
scanf("%f%f", &nota1, &nota2);

printf("Informe os pesos das notas, na mesma ordem: ");
scanf("%i%i", &peso1, &peso2);

//Processamento de Dados
media = ((nota1 * peso1) + (nota2 * peso2)) / (peso1 + peso2);

//Saída de Dados
printf("A media ponderada das notas e de %.2f", media);

}