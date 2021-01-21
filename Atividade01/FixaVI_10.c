/* 10. Uma companhia de seguros tem três categorias de seguros baseadas na idade e
ocupação do segurado. Somente pessoas com pelo menos 18 anos e não mais de 70 anos
podem adquirir apólices de seguros. As classes de ocupações foram definidas em três
grupos de risco. A tabela a seguir fornece as categorias em função da faixa de idade e do
grupo de risco: Faça um algoritmo que receba a idade (um número inteiro) e o grupo de
risco (representados pelos caracteres: ‘b’: baixo; ‘m’: médio ou ‘a’: alto) e
determine e imprima o código do seguro.  */

#include <stdio.h>

int main(){

    int idade;
    char risco;

    //Entrada de Dados
    printf("\nInforme a idade: ");
    scanf("%i", &idade);

    if ((idade < 18) || (idade > 70)){ //Tratamento de Entradas Invalidas
        printf("Idade Invalida!");
        return 0;
    }

    else {
        printf("Informe o grupo de risco [B], [M] ou [A]: ");
        scanf(" %c", &risco);
    }

    //Processamento e Saida de Dados
    if (idade <= 24) { //Codigo so chega aqui se idade > 18, logo, não há porque escrever redundancia
        if ((risco == 'b') || (risco == 'B')) { //Tratamento de Entrada Maiuscula e Minuscula
            printf("Seu codigo de seguro e 7!\n");
        }

        else {
            if ((risco == 'm') || (risco == 'M')) {
                printf("Seu codigo de seguro e 8!\n");
            }

            else {
                if ((risco == 'a') || (risco == 'A')) {
                    printf("Seu codigo de seguro e 9!\n");
                }
            }
        }
    }

    else {
        if (idade <= 40) { //Codigo so chega aqui se idade > 24
            if ((risco == 'b') || (risco == 'B')) {
                printf("Seu codigo de seguro e 4!\n");
            }

            else {
                if ((risco == 'm') || (risco == 'M')){
                    printf("Seu codigo de seguro e 5!\n");
                }

                else {
                    if ((risco == 'a') || (risco == 'A')) {
                        printf("Seu codigo de seguro e 6!\n");
                    }
                }
            }
        }

        else {
            if (idade <= 70) { //Codigo so chega aqui se idade > 40
                if ((risco == 'b') || (risco == 'B')) {
                    printf("Seu codigo de seguro e 1!\n");
                }

                else {
                    if ((risco == 'm') || (risco == 'M')) {
                        printf("Seu codigo de seguro e 2!\n");
                    }

                    else {
                        if ((risco == 'a') || (risco == 'A')) {
                            printf("Seu codigo de seguro e 3!\n");
                        }
                    }
                }
            }
        }
    }
}
