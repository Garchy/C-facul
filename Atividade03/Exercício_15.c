#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

const int tam=100;

// Módulo para ler a string
void ler_string(char *texto) 
{
    printf("\nInforme uma string: "); 
	scanf("%[^\n]",texto);

}

// Módulo para convertar toda a string em mauiscula
void str_mauiscula(char *texto) 
{
    for(int i=0; texto[i] != '\0';i++)
        texto[i] = toupper(texto[i]);
}


int main()
{
    
    char txt[tam];
    
    ler_string(txt);
    
    str_mauiscula(txt);
    
    printf("\nString alterada: %s",txt);

 return 0;

}

