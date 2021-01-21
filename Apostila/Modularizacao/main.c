#include <stdio.h>

void leitura(int *pli, int *pls);
void conta_pi(int li, int ls, int *pcp, int *pci);
void mostra_dados(int qp, int qi);

int main(void) {
  int limite_sup, limite_inf, total_p=0, total_i=0;
  //Entrada de dados 
  leitura(&limite_inf, &limite_sup);

  //Processamento de dados
  conta_pi(limite_inf, limite_sup, &total_p, &total_i);

  //Saída de dados
  mostra_dados(total_p, total_i);
  return 0;
}

void leitura(int *pli, int *pls){
  printf("\nDigite o limite inferior e o limite superior do intervalo: ");
  scanf("%i%i", pli, pls);
}

void conta_pi(int li, int ls, int *pcp, int *pci){
  for(int i = li; i <= ls; i++){
    if(i % 2 == 0){
      (*pcp)++;
    }
    else{
      (*pci)++;
    }
  }
}

void mostra_dados(int qp, int qi){
  printf("\nNumeros de pares no intervalo = %i e numero de impares: %i", qp, qi);
}