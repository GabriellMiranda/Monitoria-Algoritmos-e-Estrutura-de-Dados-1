#include "ListaLinhas.h"

void inicializaLista(ListaLinhas *listaLin){
    listaLin->primeiro = (CelulaLinhas*)malloc(sizeof(CelulaLinhas));
    listaLin->ultimo = listaLin->primeiro;
    listaLin->primeiro->prox = NULL;
}

int ehVazia(ListaLinhas *listaLin){
    return(listaLin->primeiro == listaLin->ultimo);
}

void insereListaLinhas(ListaLinhas *listaLin, int linha){
    if(!existeNaLista(listaLin, linha)){
        listaLin->ultimo->prox = (CelulaLinhas*)malloc(sizeof(CelulaLinhas));
        listaLin->ultimo = listaLin->ultimo->prox;
        listaLin->ultimo->linha.linha = linha;
        listaLin->ultimo->prox = NULL;
    }
}

int existeNaLista(ListaLinhas *listaLin, int linha){
    CelulaLinhas *pAux = listaLin->primeiro->prox;
    while (pAux != NULL){
        if(pAux->linha.linha == linha){
            return true;
        }
        pAux = pAux->prox;
    }
    return false;
    
}

void imprimeListaLinha(ListaLinhas *listaLin){
    CelulaLinhas *cLinhas;
    cLinhas = listaLin->primeiro->prox;
    printf("Linhas: ");
    while(cLinhas != NULL){
        printf("|%d", cLinhas->linha.linha);
        cLinhas = cLinhas->prox;
    }
    printf("|\n");
}
 
