/* Elabore um programa C modularizado que receba o estoque de 4
produtos(colunas) que estão armazenados em 5 armazéns (linhas) e coloque
estes dados em uma matriz 5 por 4. Calcule e imprima:
a) a quantidade de itens armazenados em cada armazém;
b) qual armazém possui a maior quantidade de itens em estoque;
c) qual armazém possui a menor quantidade de itens em estoque. */

#include <stdio.h>

const int lin=2, col=3;
int i,j;

//Le os produtos e separa por armazem
void le_produto(int mat[lin][col]){
    for (i = 0; i < lin; i++){
        for (j = 0; j < col; j++){
            printf("\nArmazem %i, Produto %i: ", i + 1 , j+ 1);
            scanf("%i", &mat[i][j]);
        }
        printf("\n");
    }

}

//Calcula o total armazenado em cada armazem
void calc_tot_arm(int mat[lin][col], int *armaz){
    int maior = 0;
    int menor = 10000;
    for (i = 0; i < lin; i++){
        armaz[i] = 0;
        for(j = 0; j < col; j++){
            armaz[i]+=mat[i][j];
        }
    }
    printf("\nTotal armazenado em cada armazem:\n");
    for(i = 0; i < lin; i++){
        printf("\n%io Armazem: %i\n", i + 1, armaz[i]);
        //Define o armazem que mais possui produtos
        if (armaz[i] > maior){
            maior = armaz[i];
        }
        else 
            //Define o armazem que menos possui produtos
            if (armaz[i] < menor){
                menor = armaz[i];
            }
    }
    printf("\nO armazem com mais produto, possui %i produtos.", maior);
    printf("\nE o armazem com menos produto, possui %i produtos.\n", menor);
}


int main(){
    int produto[lin][col], tot_armaz[lin];

    le_produto(produto);

    calc_tot_arm(produto, tot_armaz);





}