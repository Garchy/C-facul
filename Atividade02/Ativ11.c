/* Faça um programa C modularizado que receba as vendas semanais ( de
um mês ) de 5 vendedores de uma loja e armazene essas vendas em uma
matriz.
Calcule e imprima:
. total de vendas do mês ( 4 semanas) de cada vendedor;
. total de vendas de cada semana (todos os vendedores juntos);
. total de vendas do mês */

#include <stdio.h>

const int lin = 5, col= 4;
int i,j;

//Recebe as vendas da semana por vendedor
void le_mat(float mv[lin][col]){
    printf("Digite o valor das vendas dos vendedores por semana:\n");
    for (i = 0; i < lin; i++){
        for (j=0;j<col;j++){
            printf( "\n\t %io vendedor na semana %i: ", i + 1, j + 1);
            scanf("%f", &mv[i][j]);
        }
    printf("\n");
    }
}

//Calcula o total de todas as vendas
void calc_tot_vend(float mv[lin][col], float *vv){
    for (i = 0;i < lin; i++){
        vv[i]=0;
        for (j=0;j<col;j++)
        vv[i] += mv[i][j];
    }
}

//Calcula o total de vendas semanais
void calc_tot_sem(float mv[lin][col], float *vs){
    for (j=0;j<col;j++){
        vs[j]=0;
        for (i=0;i<lin;i++)
        vs[j] += mv[i][j];
    }
}

//Retorna o total de vendas semanais
float calc_tg( float *vs ){
    float total=0;
    for (j=0;j<col;j++)
    total += vs[j];
    return(total);
}

//Modulo para imprimir o total de vendas por vendedor
void mostra_tot_v(float *vv){
    printf("\n\nTotal vendas do por vendedor: \n\n");
    for(i=0;i<lin;i++)
    printf("\n\t%io Vendedor: R$ %.2f", i + 1, vv[i]);
    printf("\n\n");
}

//Modulo que imprime o total de vendas geral e de cada semana
void mostra_tot_s_tg( float*vs, float tg ){
    printf("\n\nTotal vendas do por semana: \n\n");
    for(j=0;j<col;j++)
    printf("\n\t%ia Semana: R$ %.2f", j + 1, vs[j]);
    printf("\n\n"); 
    printf("\n\nTotal geral de vendas e: %8.2f \n\n",tg);
}

int main()
{
    float matriz_vendas[lin][col], vet_vend[lin], vet_sem[col], total_geral;
    
    le_mat(matriz_vendas);
    
    calc_tot_vend( matriz_vendas, vet_vend);
    
    calc_tot_sem(matriz_vendas, vet_sem);
    
    total_geral = calc_tg(vet_sem);
    
    mostra_tot_v( vet_vend);
    
    mostra_tot_s_tg( vet_sem, total_geral );
    
}
