#include "ListaPalavra.h"

void criaNovaListaPalavra(ListaPalavras *listaPalavra){
    listaPalavra->primeiro = (CelulaPalavra*)malloc(sizeof(CelulaPalavra));
    listaPalavra->ultimo = listaPalavra->primeiro;
    listaPalavra->primeiro->prox = NULL;
    listaPalavra->quantidadePalavras = 0;
}

int inserePalavra(ListaPalavras *listaPalavras, char *palavra, int linha){
    if(!verificaPalavra(listaPalavras, palavra, linha)){ //verifica se a palavra existe
        listaPalavras->ultimo->prox = (CelulaPalavra*)malloc(sizeof(CelulaPalavra));
        listaPalavras->ultimo = listaPalavras->ultimo->prox;
        listaPalavras->ultimo->palavra = (Palavra*)malloc(sizeof(Palavra));
        criaPalavraVazia(listaPalavras->ultimo->palavra);
        preencheCadeiaCaracteres(listaPalavras->ultimo->palavra, palavra, linha);
        listaPalavras->quantidadePalavras++;
        listaPalavras->ultimo->prox = NULL;
        return true;
    }else{
        return false;
    }

}

int verificaPalavra(ListaPalavras *listaPalavra, char *palavra, int linha){
    CelulaPalavra *pAux = listaPalavra->primeiro->prox;
    while (pAux != NULL){
        if(strcmp(pAux->palavra->palavra, palavra) == 0){
            insereListaLinhas(pAux->palavra->listaLinhas, linha);
            return true;
        }
        pAux = pAux->prox;
    }
    return false;
 
}

void removePalavra(ListaPalavras *listaPalavra, char *palavra){
    CelulaPalavra *pAux = listaPalavra->primeiro->prox;
    CelulaPalavra *pAnt = listaPalavra->primeiro;

    while (strcmp(pAux->palavra->palavra, palavra)!=0){
        pAux = pAux->prox;
        pAnt = pAnt->prox;
    }
    if(pAux != NULL) {
        pAnt->prox = pAux->prox;
        listaPalavra->quantidadePalavras--;
        free(pAux);
    }
}


int retornaNumeroPalavras(ListaPalavras *listaPalavra){
    return listaPalavra->quantidadePalavras;
}

void imprimePalavras(ListaPalavras *listaPalavra){
    CelulaPalavra *pAux = listaPalavra->primeiro->prox;
    while (pAux != NULL){
        printf("-----------------------\n");
        imprimePalavraLinhas(pAux->palavra);
        printf("-----------------------\n");
        pAux = pAux->prox;
    }
}