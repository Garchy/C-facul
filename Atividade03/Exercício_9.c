#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main ()
{
  char string[100];
  char st_caractere[100];
  char concatenada[100];
  int i,cont, posicao;
  
    printf("\nInforme uma string: "); //Ler a string principal
    gets(string);

    printf("\nInforme um caractere: "); //Ler caractere que será inserido na string principal
    gets(st_caractere);

    printf("\nInforme a posicao a ser inserido o caractere: "); //Ler a posição a ser inserido o caractere
    scanf("%i",&posicao);
    
    strcpy(concatenada,string);

    for(cont=strlen(string) + 1; cont>posicao; cont--)
    {
        string[cont]=string[cont-1];
    }
    string[posicao]=st_caractere[0];
    strcpy(concatenada,string);
    printf("\nNova string: %s",concatenada);
  
  return 0;
}

