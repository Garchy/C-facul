/* Faça um programa C modularizado para calcular a soma de duas
matrizes de ordens 5 x 3. Guarde a resposta numa terceira matriz e
mostre-a na tela. */

#include <stdio.h>

const int lin = 5, col = 3;
int i, j;

//Modulo para ler os valores da primeira matriz
void leMat_1(int mat_1[lin][col]){
    printf("\nInforme os valores da matriz 1\n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%i x %i: ", i + 1, j + 1);
            scanf("\t%i", &mat_1[i][j]);
        }
    }
}

//le os valores da segunda matriz
void leMat_2(int mat_2[lin][col]){
    printf("\nInforme os valores da matriz 2\n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%i x %i: ", i + 1, j + 1);
            scanf("\t%i", &mat_2[i][j]);
        }
    }
}

//Modulo que soma as matrizes 1 e 2, e forma uma matriz 3
void soma_mat(int mat_1[lin][col], int mat_2[lin][col], int mat_3[lin][col]){
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            mat_3[i][j] = mat_1[i][j] + mat_2[i][j];
        }
    }
}

//Imprime a matriz 3
void mostraMat(int mat_3[lin][col]){
    printf("\nA soma das duas matrizes:\n");
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("%5i", mat_3[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int matriz_1[lin][col], matriz_2[lin][col], matriz_3[lin][col];

    leMat_1(matriz_1);

    leMat_2(matriz_2);

    soma_mat(matriz_1, matriz_2, matriz_3);

    mostraMat(matriz_3);

}