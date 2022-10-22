#include "ListaDicionario.h"

void inicializarListaDicionario(ListaDicionario *listDicionario){
    listDicionario->primeiro = (CelulaDicionario*)malloc(sizeof(CelulaDicionario));
    listDicionario->ultimo = listDicionario->primeiro;
    listDicionario->primeiro->prox = NULL;
}

void constroiDicionario(ListaDicionario *listDicionario, char *texto, int *linha){
    char *palavra;
    char letra;
    *linha = *linha + 1;
    palavra = strtok(texto," ");
    while (palavra != NULL){
        if(palavra[strlen(palavra)-1] == '\n'){
             palavra[strlen(palavra) - 1] = '\0';
        }
        letra = palavra[0];
        //printf("%ld", strlen(palavra));
        insereOrdenado(listDicionario, &letra, palavra, *linha);
        palavra = strtok(NULL," ");  
    }
}

void insereOrdenado(ListaDicionario *listDicionario, char *letra, char *palavra, int linha){
    CelulaDicionario *pAux = listDicionario->primeiro->prox;
    CelulaDicionario *pAnt = listDicionario->primeiro;
    
    //verificar se já tem a letra armazenda
    if(verificaLetraExistente(listDicionario, *letra, palavra, linha)){
        return;
    }
    //criando uma nova lista com uma nova letra:
    Dicionario *dicionario = (Dicionario*)malloc(sizeof(Dicionario));
    inicializarDicionario(dicionario, *letra);
    inseriPalavraDoDic(dicionario, palavra, linha);

    while (pAux != NULL && pAux->dicionario->letra <= *letra){
        pAux = pAux->prox;
        pAnt = pAnt->prox;
    }
    if(pAux != NULL){
        CelulaDicionario *pNovo = (CelulaDicionario*)malloc(sizeof(CelulaDicionario));
        pNovo->dicionario = dicionario;
        pNovo->prox = pAux;
        pAnt->prox = pNovo;
        return;
    }
 
    listDicionario->ultimo->prox = (CelulaDicionario*)malloc(sizeof(CelulaDicionario));
    listDicionario->ultimo = listDicionario->ultimo->prox;
    listDicionario->ultimo->dicionario = dicionario;
    listDicionario->ultimo->prox = NULL;

    return;
}

int verificaLetraExistente(ListaDicionario *listDicionario, char letra, char *palavra, int linha){
    CelulaDicionario *pAux = listDicionario->primeiro->prox;
     while (pAux != NULL){
        if(pAux->dicionario->letra == letra){
            inseriPalavraDoDic(pAux->dicionario, palavra, linha); 
            return true;
        }
        pAux = pAux->prox;
     }
     return false;

}

void exibePalavras(ListaDicionario *listDicionario, char *letra){
    CelulaDicionario *pAux = listDicionario->primeiro->prox;
     while (pAux != NULL){
        if(pAux->dicionario->letra == *letra){
            imprimeListaPalavrasDic(pAux->dicionario);
        }
        pAux = pAux->prox;
     }

}

void mostraPalavras(ListaDicionario *listDicionario){
    CelulaDicionario *pAux = listDicionario->primeiro->prox;
    while (pAux != NULL){
        imprimeListaPalavrasDic(pAux->dicionario);
        pAux = pAux->prox;
    }
}