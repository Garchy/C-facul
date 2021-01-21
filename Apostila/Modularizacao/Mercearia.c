#include <stdio.h>

const int TAM = 4;
int i;

void leitura(int vq[TAM], float vp[TAM]){

    printf("\n\nDigite as quantidades e os precos das mercadorias (TOTAL: %i)", TAM);
    for(i = 0; i < TAM; i++){
        printf("\n\nMercadoria %i: ", i+1);
        printf("\nQuantidade: ");
        scanf("%i", &vq[i]);
        printf("Preco: ");
        scanf("%f", &vp[i]);
    }

}

void faturamento_pm(int vq[TAM], float vp[TAM], float vf[TAM]){
  for(i = 0; i < TAM; i++){
  vf[i] = vp[i] * vq[i];
  }
}

float fat_total(float vf[TAM]){
  float soma_ft=0;

  for(i = 0; i < TAM; i++){
  soma_ft += vf[i];
  }

return soma_ft;
}



void mostra_fat_tot(float ft){

  printf("\nFaturamento total das mercadorias: R$%.2f", ft);

}

int main() {

    int quantidades[TAM];
    float precos[TAM], faturamentos[TAM], fat_tot;

    //Entrada de Dados
    leitura(quantidades, precos);


    //Processamento de Dados
    faturamento_pm(quantidades, precos, faturamentos);
    fat_tot = fat_total(faturamentos);


    //Saída de Dados
    mostra_fat_tot(fat_tot);
}