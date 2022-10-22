#ifndef LISTA_PALAVRA
#define LISTA_PALAVRA
//Lista de palavras que começam com a mesma letra
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "../Palavra/Palavra.h"

typedef struct CelulaPalavra{
    Palavra *palavra;
    struct CelulaPalavra* prox;
}CelulaPalavra;

typedef struct {
    int quantidadePalavras;
    CelulaPalavra* primeiro;
    CelulaPalavra* ultimo;
}ListaPalavras;


void criaNovaListaPalavra(ListaPalavras *listaPalavra);

int inserePalavra(ListaPalavras *listaPalavras, char *palavra, int linha);

int verificaPalavra(ListaPalavras *listaPalavra, char *palavra, int linha);

void removePalavra(ListaPalavras *listaPalavra, char *palavra);

int retornaNumeroPalavras(ListaPalavras *listaPalavra);

void imprimePalavras(ListaPalavras *listaPalavra);

#endif