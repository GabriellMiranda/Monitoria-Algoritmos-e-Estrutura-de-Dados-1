#ifndef PALAVRA_H
#define PALAVRA_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../ListaLinhas/ListaLinhas.h"

typedef struct{
    char palavra[100];
    ListaLinhas *listaLinhas;
}Palavra;

void criaPalavraVazia(Palavra *palavra);

void preencheCadeiaCaracteres(Palavra *palavra, char * novaPalavra, int linha);

char *retornaCadeiaCaracteres(Palavra *Palavra);

void imprimeCadeiaCaracteres(Palavra *palavra);

void imprimePalavraLinhas(Palavra *palavra);

#endif