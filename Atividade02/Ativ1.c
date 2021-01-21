/* Escreva um programa em C que preencha uma matriz 4X4 com "0" e a
sua diagonal principal com "1“. Em seguida, exiba a matriz na tela (uma
linha da matriz por vez). */

#include <stdio.h>
const int tam = 4;
int i, j;

//Modulo para preenchimento automatico da matriz
void preencheMat(int matriz[tam][tam]){
    for (i=0; i < tam; i++){
        for (j=0; j < tam; j++){
            if (i == j) {
                matriz[i][j] = 1; 
            }
            else{
                matriz[i][j] = 0;
            }
        }
    }

}

//Modulo para imprimir a matriz formatada
void mostraMat(int matriz[tam][tam]){
    printf("\n___Matriz Identidade___\n");

    for (i=0; i < tam; i++){        
        for (j=0; j < tam; j++){
            printf("%5i", matriz[i][j]);
        }
        printf("\n");
    }
}


int main(){
    int matriz[tam][tam];

    preencheMat(matriz);

    mostraMat(matriz);

}