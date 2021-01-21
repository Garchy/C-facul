/* 19. Faça um algoritmo que verifique a validade de uma senha fornecida pelo
usuário. A senha correta é o número: 12345. O algoritmo deve imprimir mensagem de
permissão ou negação de acesso. */

#include <stdio.h>

int main(){

    int senha;

    //Entrada de Dados
    printf("\nDigite a senha: ");
    scanf("%i", &senha);

    //Processamento e Saida de Dados
    if (senha == 12345) { //Definição da senha
        printf("Acesso Permitido!\n");
    }

    else {
        printf("Acesso Negado!\n");        
    }

}