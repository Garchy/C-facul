#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
    char st_ex5[10], op[10]= "NAO";
    char filtro[10][100] = {"SIM","NAO"};
    printf("\nEntre com as opcoes SIM ou NAO: ");
    scanf("%s",st_ex5);
    if (strcmp(st_ex5,filtro)) // IF usado para retornar nada caso valor digitado seja diferente de SIM ou NAO.
        return 0;
    else
        if (strcmp(st_ex5,op)) // IF para retornar 1 se string for SIM ou 0 se string for NAO.
            printf("\nValor retornado e 1.");
        else
            printf("\nValor retornado e 0.");
        
}

