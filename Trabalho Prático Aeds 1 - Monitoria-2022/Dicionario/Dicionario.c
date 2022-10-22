#include "Dicionario.h"

void inicializarDicionario(Dicionario *dicionario, char letra){
    dicionario->letra = letra;
    dicionario->listaPalavra = (ListaPalavras*)malloc(sizeof(ListaPalavras));
    criaNovaListaPalavra(dicionario->listaPalavra);
}

void inseriPalavraDoDic(Dicionario *dicionario, char *palavra, int linha){
    inserePalavra(dicionario->listaPalavra, palavra, linha);
}

void imprimeListaPalavrasDic(Dicionario *dicionario){
    printf("\n***********************************\n");
    printf("Letra:[%c]\n\n", dicionario->letra);
    imprimePalavras(dicionario->listaPalavra);
    printf("***********************************\n");
}

