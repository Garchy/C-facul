/* 8. Faça um algoritmo que receba o código correspondente ao cargo de um funcionário e
imprima seu cargo e o percentual de aumento ao qual este funcionário tem direito
seguindo a tabela abaixo: */

#include <stdio.h>

int main(){

    int opcao;

    //Exibição dos codigos aceitos
    printf("\nCodigo 1: Escrituario\n") ;  
    printf("Codigo 2: Secretario\n");
    printf("Codigo 3: Caixa\n");
    printf("Codigo 4: Gerente\n");
    printf("Codigo 5: Diretor\n");

    //Entrada de Dados
    printf("\nPara saber o aumento de cada cargo, digite o codigo desejado: ");
    scanf("%i", &opcao);

    //Processamento e Saida de Dados
    switch(opcao) { //Sistema de escolha a partir da resposta do usuario
        case 1: printf("O Escrituario tem direito a 50%% de aumento!\n");
            break;
        case 2: printf("O Secretario tem direito a 35%% de aumento!\n");
            break;
        case 3: printf("O Caixa tem direito a 20%% de aumento!\n");
            break;
        case 4: printf("O Gerente tem direito a 10%% de aumento!\n");
            break;
        case 5: printf("O Diretor nao tem direito ao aumento!\n");
            break;
        default: printf("Opcao Invalida!\n"); //Tratamento de entrada invalida
    }

}