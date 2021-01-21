#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main()
 
{
	char num[100];
	char palavras[100];
 	int i;
 
	printf("\nInforme UM numero: "); //Informar o número que será convertido para escrito
	scanf("%[^\n]",num);
 	for (i=0; i<strlen(num); i++) // For utilizado para ler o número e substitui-lo pela versão escrita
		switch (num[i])
		{
			case '0':strcat(palavras,"zero ");
				break;

			case '1':strcat(palavras,"um ");
				break;

			case '2':strcat(palavras,"dois ");
				break;

			case '3':strcat(palavras,"três ");
				break;

			case '4':strcat(palavras,"quatro ");
				break;

			case '5':strcat(palavras,"cinco ");
				break;

			case '6':strcat(palavras,"seis ");
				break;

			case '7':strcat(palavras,"sete ");
				break;

			case '8':strcat(palavras,"oito ");
				break;

			case '9':strcat(palavras,"nove ");
				break;

			default: return 0;
		}
	
 	printf ("\nNUmero escrito: %s",palavras); 
}
