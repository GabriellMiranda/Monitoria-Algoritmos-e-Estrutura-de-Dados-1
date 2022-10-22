#ifndef LISTA_DICIONARIO
#define LISTA_DICIONARIO

#include"../Dicionario/Dicionario.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>


typedef struct CelulaDicionario{
    Dicionario *dicionario;
    struct CelulaDicionario* prox;
}CelulaDicionario;

typedef struct {
    CelulaDicionario* primeiro;
    CelulaDicionario* ultimo;
}ListaDicionario;


void inicializarListaDicionario(ListaDicionario *listDicionario);

void constroiDicionario(ListaDicionario *listDicionario, char *texto, int *linha);

void insereOrdenado(ListaDicionario *listaDicionario, char *letra, char *palavra, int linha);

int verificaLetraExistente(ListaDicionario *listDicionario, char letra, char *palavra, int linha);

void exibePalavras(ListaDicionario *listDicionario, char *letra);

void mostraPalavras(ListaDicionario *listDicionario);

#endif