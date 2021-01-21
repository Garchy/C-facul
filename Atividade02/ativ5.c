/* Refaça o programa do exercício anterior de forma que a posição do maior
elemento seja retornada. */

#include <stdio.h>
const int nomes = 10, tam = 5;
int i, j;


//Modulo para ler numeros do usuario e compor a matriz
void leMat(int mat[nomes][tam]){
    printf("\nInforme os valores da matriz\n");
    for (i = 0; i < nomes; i++){
        for (j = 0; j < tam; j++){
            printf("%i x %i: ", i + 1, j + 1);
            scanf("\t%i", &mat[i][j]);
        }
    }
}

//Modulo para imprimir a matriz formatada
void mostraMat(int mat[nomes][tam]){
    printf("\n\tSua matriz\n");
    for (i = 0; i < nomes; i++){        
        for (j = 0; j < tam; j++){
            printf("%5i", mat[i][j]);
        }
        printf("\n");
    }

}


//Modulo que procura a posicao [i][j] do maior numero da matriz e retorna o maior numero
int maior(int mat[nomes][tam]){
    int posI = 1, posJ;
    int maior = mat[0][0];
    for (i = 0; i < nomes; i++){
        for (j = 0; j < tam; j++){
            if (mat[i][j] > maior){
                maior = mat[i][j];   
                posI = i;
                posJ = j;      
            }
        }
    }
    printf("O maior numero esta na posicao %i x %i", posI + 1, posJ + 1);
    return (maior);
}

int main() {
    int matriz[nomes][tam];
    int num_maior;

    leMat(matriz);

    mostraMat(matriz);

    num_maior = maior(matriz);
    printf("\nNumero: %i", num_maior);
}