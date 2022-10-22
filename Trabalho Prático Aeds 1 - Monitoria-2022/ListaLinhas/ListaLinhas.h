#ifndef LISTA_LINHAS
#define LISTA_LINHAS
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct{
    int linha;
}Linha;


typedef struct CelulaLinhas{
    Linha linha;
    struct CelulaLinhas* prox;
}CelulaLinhas;

typedef struct {
    CelulaLinhas* primeiro;
    CelulaLinhas* ultimo;
}ListaLinhas;

void inicializaLista(ListaLinhas *listaLin);

int ehVazia(ListaLinhas *listaLin);

int existeNaLista(ListaLinhas *listaLin, int linha);

void insereListaLinhas(ListaLinhas *listaLin, int linha);

void imprimeListaLinha(ListaLinhas *listaLin);

#endif