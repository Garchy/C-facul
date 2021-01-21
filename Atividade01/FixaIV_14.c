/* 14. Faça um algoritmo que efetue a leitura de três valores numéricos reais distintos e
apresente os valores lidos em ordem crescente. */

#include <stdio.h>

int main(){

    float num1, num2, num3;

    //Entrada de Dados
    printf("\nInforme 3 numeros reais distintos: ");
    scanf("%f%f%f", &num1, &num2, &num3);

    //Processamento e Saída de Dados
    if ((num1 < num2) && (num1 < num3)) {
        if (num2 < num3) {
            printf("\nEm ordem crescente, fica: %.2f %.2f %.2f\n", num1, num2, num3);
        }
        
        else {
            printf("\nEm ordem crescente, fica: %.2f %.2f %.2f\n", num1, num3, num2);
        }
    }

    else {
        if ((num2 < num1) && (num2 < num3)) {
            if (num1 < num3) {
                printf("\nEm ordem crescente, fica: %.2f %.2f %.2f\n", num2, num1, num3);
            } 

            else {
                printf("\nEm ordem crescente, fica: %.2f %.2f %.2f\n", num2, num3, num1); 
            }  
        } 

        else {  //Evitando quantas redundancias consegui
            if (num1 < num2) {
                printf("\nEm ordem crescente, fica: %.2f %.2f %.2f\n", num3, num1, num2);
            }
            
            else{
                printf("\nEm ordem crescente, fica: %.2f %.2f %.2f\n", num3, num2, num1);
            }
        }      
    }
    
}