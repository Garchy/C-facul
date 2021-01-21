#include <stdio.h>

void lerPI(int *pontinf, int *pontsup){
    printf("\nDigite o limite inferior e o limite superior: ");
    scanf("%i%i", pontinf, pontsup);
}

void contaPI(int liminf, int limsup, int *numPar, int *numImpar) {
    for (int i = liminf; i <= limsup; i++) {
        if (i % 2 == 0)
            *numPar = *numPar + 1;

        else
            *numImpar = *numImpar + 1;
    }
}

void imprimePI(int pares, int impares) {
    printf("Ha %i numero(s) par(res) e %i numero(s) impar(es)!", pares, impares);
}

int main() {

    int limitinho, limitao, qtdPar=0, qtdImpar=0;

    lerPI(&limitinho, &limitao); 

    contaPI(limitinho, limitao, &qtdPar, &qtdImpar);
    
    imprimePI(qtdPar, qtdImpar);
} 