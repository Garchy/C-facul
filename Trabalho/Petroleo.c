#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i, j, cont=10;

//Inicialização da Struct
//Kevin
typedef struct {
    int codigo, qtdBarris;
    char nomeTipo[20], nomePlataforma[80];
    float precoCompra, precoVenda;
}   Cadastro;
Cadastro cad[80];
Cadastro *p;

//Modulo para inicializar as variaveis da struct
//Perim
void inicia(){
        
    strcpy(cad[0].nomeTipo, "Aromaticos");
    strcpy(cad[0].nomePlataforma, "Morningstar Petroleo");
    cad[0].codigo = 90;
    cad[0].qtdBarris = 52;
    cad[0].precoCompra = 2.5;
    cad[0].precoVenda = 5;
    
    strcpy(cad[1].nomeTipo, "Parafinicos");
    strcpy(cad[1].nomePlataforma, "Petroleo Focus");
    cad[1].codigo = 12;
    cad[1].qtdBarris = 58;
    cad[1].precoCompra = 3.0;
    cad[1].precoVenda = 7.0;

    strcpy(cad[2].nomeTipo, "Aromaticos");
    strcpy(cad[2].nomePlataforma, "Petroleo Evolution");
    cad[2].codigo = 17;
    cad[2].qtdBarris = 66;
    cad[2].precoCompra = 10.0;
    cad[2].precoVenda = 19.9;
    
    strcpy(cad[3].nomeTipo, "Naftenicos");
    strcpy(cad[3].nomePlataforma, "Petroleo Places");
    cad[3].codigo = 13;
    cad[3].qtdBarris = 54;
    cad[3].precoCompra = 6.5;
    cad[3].precoVenda = 15.5;

    strcpy(cad[4].nomeTipo, "Parafinicos");
    strcpy(cad[4].nomePlataforma, "Trip Petroleo");
    cad[4].codigo = 28;
    cad[4].qtdBarris = 80;
    cad[4].precoCompra = 2.5;
    cad[4].precoVenda = 9.9;
    
    strcpy(cad[5].nomeTipo, "Aromaticos");
    strcpy(cad[5].nomePlataforma, "Petroleo Lovers");
    cad[5].codigo = 7;
    cad[5].qtdBarris = 100;
    cad[5].precoCompra = 8.5;
    cad[5].precoVenda = 15.8;

    strcpy(cad[6].nomeTipo, "Naftenicos");
    strcpy(cad[6].nomePlataforma, "Special Petroleo");
    cad[6].codigo = 5;
    cad[6].qtdBarris = 77;
    cad[6].precoCompra = 7.9;
    cad[6].precoVenda = 14.8;
    
    strcpy(cad[7].nomeTipo, "Mistos");
    strcpy(cad[7].nomePlataforma, "Sentinel Petroleo");
    cad[7].codigo = 16;
    cad[7].qtdBarris = 69;
    cad[7].precoCompra = 12.5;
    cad[7].precoVenda = 22.2;

    strcpy(cad[8].nomeTipo, "Mistos");
    strcpy(cad[8].nomePlataforma, "Petroleo Loving");
    cad[8].codigo = 18;
    cad[8].qtdBarris = 61;
    cad[8].precoCompra = 8.9;
    cad[8].precoVenda = 14.8;
    
    strcpy(cad[9].nomeTipo, "Naftenicos");
    strcpy(cad[9].nomePlataforma, "Air Petroleo");
    cad[9].codigo = 4;
    cad[9].qtdBarris = 91;
    cad[9].precoCompra = 33.7;
    cad[9].precoVenda = 50.9;
}

//Modulo que cadastra um novo lote de barris.
//Fell
void novoLote(){
    printf("\nNumero do codigo do lote: ");
    scanf("%i%*c", &cad[cont].codigo);        

    printf("\nNome do tipo de petroleo: ");
    scanf("%s%*c", &cad[cont].nomeTipo);
        
    printf("\nQuantidade de barris armazenado: ");
    scanf("%i%*c", &cad[cont].qtdBarris);
        
    printf("\nPreco de compra por unidade: ");
    scanf("%f%*c", &cad[cont].precoCompra);
        
    printf("\nPreco de venda do barril: ");
    scanf("%f%*c", &cad[cont].precoVenda);

    printf("\nNome da Plataforma (fornecedor): ");
    scanf("%s%*c", &cad[cont].nomePlataforma);   
    cont++;
}

//Modulo que remove o lote atraves da posição fornecido pelo usuario
//Gabryel
void excluiLote(){
    int pos;

    printf("\nDigite a posicao do lote para excluir: ");
    scanf("%i", &pos);
    
    //para ajustar aos indices que começam em 0
    pos-- ; 

    //se a posição é valida
    if (pos >= 0 && pos < cont){ 
        int i;

        //andar todos um para trás a partir da posição a remover
        for (i = pos;i < cont - 1; ++i){ 
            cad[i] = cad[i + 1];
        }
        //reduzir o tamanho do array em 1 unidade
        p = realloc(cad, --cont * sizeof(Cadastro)); 
    }    
}

//modulo que atualiza as informações no lote pesquisado
//Fell
void atualizaLote(){
    int num_lote;
    
    printf("\n\nQual o numero do lote que deseja atualizar: ");
    scanf("%i", &num_lote);

    for (i = 0; i < cont; i++){        
        if(num_lote != cad[i].codigo){
            printf("\nCodigo de lote nao encontrado!\n");
        }
        else{
            printf("\nNome do tipo de petroleo: ");
            scanf("%s%*c", &cad[i].nomeTipo);
                
            printf("\nQuantidade de barris armazenado: ");
            scanf("%i%*c", &cad[i].qtdBarris);
                
            printf("\nPreco de compra por unidade: ");
            scanf("%f%*c", &cad[i].precoCompra);
                
            printf("\nPreco de venda do barril: ");
            scanf("%f%*c", &cad[i].precoVenda);

            printf("\nNome da Plataforma (fornecedor): ");
            scanf("%s%*c", &cad[i].nomePlataforma);

            printf("\nInformacoes do lote atualizado!\n");
        }
    } 
    
}

//Modulo qe consulta o preço de compra e venda do lote
//Gabryel
void consultarPrecoLote(){
    int cod_cv;

    printf("\nNumero do lote que deseja consultar o preco de compra e venda: ");
    scanf("%i", &cod_cv);

    for (i = 0; i < cont; i++){        
        if(cod_cv == cad[i].codigo){
            printf("\nPreco de compra por unidade: R$ %.2f", cad[i].precoCompra);
                            
            printf("\nPreco de venda do barril: R$ %.2f", cad[i].precoVenda);
        }
        else{                
            printf("\nCodigo de lote nao encontrado!\n");                       
        }
    }
}

//Modulo para consultar o valor de compra total e o lucro obtido
//Gabryel
void consultaTotal(){
    float tot_pago, tot_venda;
    char calc_plat[80];

    printf("\nNome da plataforma que deseja consultar: ");
    scanf("%s", calc_plat);    
    
    for (i = 0; i < cont; i++){ 
        if (strcmp(calc_plat, cad[i].nomePlataforma)==0){
            printf("\nPlataforma: %s",cad[i].nomePlataforma );
                    
            tot_pago = cad[i].qtdBarris * cad[i].precoCompra;
            tot_venda = cad[i].qtdBarris * cad[i].precoVenda;

            printf("\nO total pago pelo lote de barris foi %.2f", tot_pago);
            printf("\nO total (bruto) ganho com a venda foi %.2f", tot_venda);
            printf("\nO total (liquido) ganho com a venda foi %.2f", tot_venda - tot_pago);
        }        
    }
}    

//Metodo da bolha (organiza os vetores em ordem crescente)
//Kevin
void bolha(){
    int limsup = cont - 1, trocou, aux1=0, aux3=0;
    float aux5=0.0, aux4=0.0;
    char aux2[80], aux6[80];    

    do{
        trocou = 0;
        for(i = 0;i <= (limsup-1);i++){
            if(cad[i].codigo > cad[i+1].codigo){
                aux1 = cad[i].codigo;
                cad[i].codigo = cad[i+1].codigo;
                cad[i + 1].codigo = aux1;
                
                strcpy(aux2,cad[i].nomeTipo);
                strcpy(cad[i].nomeTipo,cad[i + 1].nomeTipo);
                strcpy(cad[i + 1].nomeTipo, aux2);

                aux3 = cad[i].qtdBarris;
                cad[i].qtdBarris = cad[i+1].qtdBarris;
                cad[i + 1].qtdBarris = aux3;

                aux4 = cad[i].precoCompra;
                cad[i].precoCompra = cad[i+1].precoCompra;
                cad[i + 1].precoCompra = aux4;

                aux5 = cad[i].precoVenda;
                cad[i].precoVenda = cad[i+1].precoVenda;
                cad[i + 1].precoVenda = aux5;

                strcpy(aux6, cad[i].nomePlataforma);
                strcpy(cad[i].nomePlataforma, cad[i + 1].nomePlataforma);
                strcpy(cad[i + 1].nomePlataforma, aux6);
                
                trocou = 1;                
            }
        }
        limsup = limsup - 1;
    } while(trocou == 1);
}

//Modulo que imprime os Lotes Cadastrados
//perim
void imprimeDados(){
    bolha();
    for(i = 0; i < cont; i++){

        printf("\nPosicao %i: ", i + 1);
        printf("\nPNumero do codigo do lote: %i", cad[i].codigo);

        printf("\nNome do tipo de petroleo: %s", cad[i].nomeTipo);

        printf("\nQuantidade de barris amazenado: %i", cad[i].qtdBarris);

        printf("\nPreco de compra por unidade: %.2f", cad[i].precoCompra);

        printf("\nPreco de venda do barril: %.2f", cad[i].precoVenda);

        printf("\nNome da Plataforma (fornecedor): %s\n", cad[i].nomePlataforma);
    }
}

//Modulo que mostra o menu
int menu(){
    int opcao;
    printf("\n\n1. Cadastrar novo lote de barris.\n");
    printf("2. Exluir um lote.\n");
    printf("3. Atualizar dados de um lote.\n");
    printf("4. Consultar preco de compra e venda de um lote.\n");
    printf("5. Consultar o total comprado.\n");
    printf("6. Imprimir dados dos lotes em estoque.\n");
    printf("7. Finalizar programa.\n");
    printf("Escolha uma opcao: ");
    scanf("%i", &opcao);
    return opcao;
}

int main(){ 
    inicia();  

    int op;
    do{
        do{
            op = menu();        
        } while ((op < 1) && (op > 7));

        switch(op){
            case 1: novoLote();
                break;
            
            case 2: excluiLote();
                break;
            
            case 3: atualizaLote();
                break;

            case 4: consultarPrecoLote();
                break;

            case 5: consultaTotal();
                break;

            case 6: imprimeDados();
                break;
                
            case 7: printf("\n\nPrograma Finalizado!\n\n");
                break;
        }
    }  while (op != 7);    
}