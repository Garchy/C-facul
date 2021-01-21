/* Fazer um programa C modularizado que calcule a média dos elementos
da diagonal principal de uma matriz 10 x 10 de inteiros. */

#include <stdio.h>

const int tam = 10;
int i,j;

//Modulo que le numeros do usuario para compor a matriz
void leMat(int mat[tam][tam]){
    printf("\nInforme os valores da matriz\n");
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            printf("%i x %i: ", i + 1, j + 1);
            scanf("\t%i", &mat[i][j]);
        }
    }
}


//Modulo para imprimir a matriz formatada feita pelo usuario
void mostraMat(int mat[tam][tam]){
    printf("\n\tSua matriz\n");
    for (i = 0; i < tam; i++){        
        for (j = 0; j < tam; j++){
            printf("%5i", mat[i][j]);
        }
        printf("\n");
    }

}

//Modulo para calcular a media da diagonal da matriz
void calculaMat(int mat[tam][tam]){
    int soma, med;
    for (i = 0; i < tam; i++){
        for (j = 0; j < tam; j++){
            if (i == j){
                soma = soma + mat[i][j];
            }
        }
    }
    med = soma / tam;
    printf("\nA media da soma das diagonais e %i\n", med);
}


int main(){
    int matriz[tam][tam];

    leMat(matriz);

    mostraMat(matriz);

    calculaMat(matriz);
}