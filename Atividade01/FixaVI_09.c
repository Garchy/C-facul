/* 9. Faça um algoritmo que mostre um menu com as seguintes opções:
1. soma
2. multiplicação
3. finalizar
O algoritmo deve receber a opção desejada, receber os dados necessários para a
operação de cada opção, realizar a operação e imprimir o resultado. Na opção finalizar
nada deve acontecer. */

#include <stdio.h>

int main(){

    int oper;
    float num1, num2;

    //Opções aceitas
    printf("\nOpcao 1: Soma\n");
    printf("Opcao 2: Multiplicacao\n");
    printf("Opcao 3: Finalizar\n");

    //Entrada de Dados
    printf("\nEscolha a operacao desejada: ");
    scanf("%i", &oper);

    //Processamento e Saida de Dados
    switch(oper) {
        case 1: printf("\nInforme dois valores: ");
            scanf("%f%f", &num1, &num2);
            printf("A soma resulta em %.2f\n", num1 + num2);
            break;
        
        case 2: printf("\nInforme dois valores: ");
            scanf("%f%f", &num1, &num2);
            printf("A multiplicacao resulta em %.2f\n", num1 * num2);
            break;

        case 3: return 0; //Finalização do Programa

        default: printf("Opcao Invalida!\n"); //Tratamento de opção invalida
    }      

}