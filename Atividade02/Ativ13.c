/* Dadas duas matrizes numéricas A e B de dimensão 4x3, fazer um
programa C modularizado que gere uma matriz de zeros e uns denominada
C, tal que o elemento C[i,j] seja verdadeiro (1 na linguagem C) se os elementos
nas posições respectivas das matrizes A e B forem iguais e falso (0 na
linguagem C) caso contrário. Exibir na tela as matrizes A, B e C: */

#include <stdio.h>

const int lin = 4, col = 3;
int i, j;

//Le os valores da primeira matriz
void leMat_1(int A[lin][col]){
    printf("\nInforme os valores da matriz 1\n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%i x %i: ", i + 1, j + 1);
            scanf("\t%i", &A[i][j]);
        }
    }
}

//Le os valores da segunda matriz
void leMat_2(int B[lin][col]){
    printf("\nInforme os valores da matriz 2\n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%i x %i: ", i + 1, j + 1);
            scanf("\t%i", &B[i][j]);
        }
    }
}

//Compara as duas matrizes para verificar onde os elementos sao iguais
void comparaMat(int A[lin][col], int B[lin][col],int C[lin][col]){
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){

            //Se forem iguais, o numero vira 1
            if((A[i][j]) == B[i][j]){
                C[i][j] = 1;
            }
            else{
                //Se forem diferentes, ele vira 0
                C[i][j] = 0;
            }
        }
    }

}

//Imprime a matriz C de 0 e 1
void mostraMat(int C[lin][col]){
    printf("\nMatriz C:\n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%5i", C[i][j]);
        }
        printf("\n");
    }

}

int main(){
    char matriz_A[lin][col], matriz_B[lin][col], matriz_C[lin][col];

    leMat_1(matriz_A);

    leMat_2(matriz_B);

    comparaMat(matriz_A, matriz_B, matriz_C);

    mostraMat(matriz_C);
}
