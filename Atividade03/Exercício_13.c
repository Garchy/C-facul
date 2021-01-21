#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
int main()
 
{
	char texto[100];
	char novo_texto[100];
 	int i;
 
	printf("\nInforme um texto: ");
	gets(texto);
 	for (i=0;i<texto[i];i++)
    {
        if (texto[i]=='m')
            novo_texto[i]='a';

		if (texto[i]=='n')
            novo_texto[i]='e';

        if (texto[i]=='p')
            novo_texto[i]='o';

        if (texto[i]=='q')
            novo_texto[i]='i';

        if (texto[i]=='r')
            novo_texto[i]='u'; 

		if (texto[i]=='a')
            novo_texto[i]='m';

		if (texto[i]=='e')
            novo_texto[i]='n';

        if (texto[i]=='o')
            novo_texto[i]='p';

		if (texto[i]=='i')
            novo_texto[i]='q';

        if (texto[i]=='u')
            novo_texto[i]='r';   		
		}
	
 	printf ("\nNovo texto alterado: %s", novo_texto); 
}

