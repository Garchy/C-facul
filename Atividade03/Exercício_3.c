#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char dados[10][100];
    
    printf("\nInforme seu nome: ");
    gets(dados[0]);
    printf("\nInforme sua idade: ");
    gets(dados[1]);
    printf("\nInforme nome da rua: ");
    gets(dados[2]);
    printf("\nInforme seu telefone: ");
    gets(dados[3]);
    printf("\nSeu nome e %s, voce tem %s anos, mora na rua %s e seu telefone e %s.", dados[0],dados[1],dados[2],dados[3]);
    
    return 0;
    
}


