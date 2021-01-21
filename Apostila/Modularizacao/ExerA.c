#include <stdio.h>

const int TAM = 5;
int i;

void leitura(int *vet) {

    for (i = 0; i < TAM; i++){
        printf("%io numero: ", i+1);
        scanf("%i", &vet[i]);
    }
}

void mostra_vet(int vet[]) {
    for (i=0; i < TAM; i++) {
        printf("%i ", vet[i]);
    }

}

int main(){
    int meuvetor[TAM];

    printf("\nDigite os %i numeros do vetor\n", TAM);
    leitura( meuvetor );

    printf("\nValores recebidos:\n");
    mostra_vet(meuvetor);

}