/* Faça um programa C modularizado que leia os nomes de 40 alunos de
uma turma de Programação de Computadores II e imprima os nomes dos
alunos que tenham iniciais ‘A’. */

#include <stdio.h>

const int nomes = 40, tam = 80;
int i, j;

//Modulo que le o nome dos alunos informado pelo usuario
void le_alunos(char mat[nomes][tam]){
    int cont = 1;
    printf("\nInforme o nome dos alunos\n");
    for (i = 0; i < nomes; i++){
       printf("Aluno %i: ", cont);
       gets(mat[i]);
       cont++;
    }

}

//Modulo para mostrar todos os alunos informados e os com iniciais 'A'
void mostra_alu(char mat[nomes][tam]){
    printf("\nOs nomes digitados foram: \n");
    for (i = 0; i < nomes; i++){
        printf("%s\n", mat[i]);
    }

    //Parte onde se procura os alunos com iniciais 'A'
    printf("\nOs nomes que comecam com a letra A sao:\n");
    for (i = 0; i < nomes; i++) {
        if((mat[i][0] == 'a') || (mat[i][0] == 'A')){
            printf("%s\n", mat[i]);
        }
    }
}

int main(){
    char alunos[nomes][tam];

    le_alunos(alunos);

    mostra_alu(alunos);
}