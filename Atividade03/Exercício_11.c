#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int i,j; 
    char digitada[70], duplicada[70];
    
    printf("\nDigite uma frase: ");
    gets(digitada);
        for (i=0,j=0;i<=strlen(digitada); i++) //For utilizado para duplicar a string digitada
    {
        duplicada[j]=digitada[i]; 
        
        duplicada[j+1]=digitada[i];
        j=j+2; //Para evitar sobreposição, se j+1 recebeu o mesmo caractere, é necessário que j comece a contagem na posição seguinte (j+2)
    }
    printf("A String modificada e: %s",duplicada);
    
}
