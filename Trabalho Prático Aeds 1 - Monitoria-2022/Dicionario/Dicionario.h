#ifndef DICIONARIO
#define DICIONARIO

#include "../ListaPalavras/ListaPalavra.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
    char letra;
    ListaPalavras *listaPalavra;
}Dicionario;

void inicializarDicionario(Dicionario *dicionario, char letra);

void inseriPalavraDoDic(Dicionario *dicionario, char *palavra, int linha);

void imprimeListaPalavrasDic(Dicionario *dicionario);

#endif