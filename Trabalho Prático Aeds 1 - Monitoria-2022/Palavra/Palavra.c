#include "Palavra.h"

void criaPalavraVazia(Palavra *palavra){
    palavra->listaLinhas =(ListaLinhas*)malloc(sizeof(ListaLinhas));
    inicializaLista(palavra->listaLinhas);
}

void preencheCadeiaCaracteres(Palavra *palavra, char *novaPalavra, int linha){
    strcpy(palavra->palavra, novaPalavra);
    insereListaLinhas(palavra->listaLinhas, linha);
}

char *retornaCadeiaCaracteres(Palavra *palavra){
    return palavra->palavra;
}

void imprimeCadeiaCaracteres(Palavra *palavra){
    printf("%s\n", palavra->palavra);
}

void imprimePalavraLinhas(Palavra *palavra){
    printf("Palavra: ");
    printf("%s\n", palavra->palavra);
    imprimeListaLinha(palavra->listaLinhas);
    
}