#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int tam=81;
int i; 

void le_str(char st_ler[tam]) //Módulo que lê a string
{
printf("\nDigite uma frase: ");
scanf("%[^\n]", st_ler);
}

//Módulo que retorna quantos caracteres possui a string
void ret_caract(char st_car[tam]) {
    int contc=0;
    for (i=0; st_car[i]!='\0'; i++) //Irá contar os caracteres da string até \0.
    {
        contc++; //variável contadora
    }
    printf("\nA frase digitada possui %i caracteres.\n", contc); //retornar nº de caracteres da string
}

//Módulo que retorna quantos caracteres de número possui a string
void ret_num(char st_numero[tam]) 
{
    int contn=0;  
    for (i=0; st_numero[i]; i++) 
    {
        if (isdigit(st_numero[i])) 
            contn++;
    }
    printf("\n\tA frase digitada possui %i caracteres de numero.\n", contn); 
}

//Módulo que retorna quantos caracteres de pontuacao possui a string
void ret_pont(char st_pont[tam]) 
{
    int contp=0;
    for (i=0; st_pont[i]; i++) 
    {
        if (ispunct(st_pont[i])) 
            contp++; 
    }
    printf("\n\tA frase digitada possui %i caracteres de pontuacao.\n", contp); 
}

//Módulo que retorna quantos caracteres brancos possui a string
void ret_bran(char st_branco[tam]) 
{
    int contb=0;
    for (i=0; st_branco[i]; i++) 
    {
        if (isspace(st_branco[i]))
        contb++;
    }
    printf("\n\tA frase digitada possui %i caracteres em branco.\n", contb);
}


int main()
{
    
    char string_ex1[tam];
    
    le_str(string_ex1);
    
    ret_caract(string_ex1);
    
    ret_num(string_ex1);
    
   ret_pont(string_ex1);
    
    ret_bran(string_ex1);
    
    return 0;
}


