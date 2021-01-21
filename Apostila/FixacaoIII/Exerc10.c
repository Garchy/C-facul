#include <stdio.h>

int main(){

    float deposito, taxa, rendim, val_tot;

    //Entrada de dados
    printf("\nInforme o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Informe a taxa de juros: ");
    scanf("%f", &taxa);

    /* Processamento de dados */
    rendim = deposito * (taxa/100);
    val_tot = rendim + deposito;

    //Saída de dados
    printf("\nO valor do rendimento foi R$%.2f e o valor total foi R$%.2f", rendim, val_tot);

}