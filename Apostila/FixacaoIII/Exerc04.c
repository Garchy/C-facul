#include <stdio.h>

int main(){
    float raio, altura, volume;

    //Entrada de Dados
    printf("Digite o valor do RAIO e ALTURA da lata, respectivamente: ");
    scanf("%f%f", &raio, &altura);

    //Processamento de Dados
    volume = 3.14159 * (raio * raio) * altura;

    //Saída de Dados
    printf("O volume da lata de oleo e aproximadamente %.2f u.m.", volume);

}