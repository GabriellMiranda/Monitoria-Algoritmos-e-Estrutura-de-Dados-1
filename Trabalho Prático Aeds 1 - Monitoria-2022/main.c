#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaLinhas/ListaLinhas.h"
#include "Palavra/Palavra.h"
#include "ListaPalavras/ListaPalavra.h"
#include "ListaDicionario/ListaDicionario.h"

int main(){
    //Lista Linhas funcionando
    /*ListaLinhas *listaLinhas = (ListaLinhas*)malloc(sizeof(ListaLinhas));
    inicializaLista(listaLinhas);
    insereListaLinhas(listaLinhas, 9);
    insereListaLinhas(listaLinhas, 10);
    insereListaLinhas(listaLinhas, 11);
    imprimeListaLinha(listaLinhas);*/

    //Tad Palavra funcionando, obs: não inserir linha repetidas
    /*Palavra *palavra;
    palavra = (Palavra*)malloc(sizeof(Palavra));
    criaPalavraVazia(palavra);
    preencheCadeiaCaracteres(palavra, "gabriel", 1);
    preencheCadeiaCaracteres(palavra, "gabriel", 2);
    preencheCadeiaCaracteres(palavra, "bom", 3);
    preencheCadeiaCaracteres(palavra, "zend", 1);
    imprimePalavraLinhas(palavra);*/

    //Tad lista palavras funcionando
    /*ListaPalavras *listaPalavras;
    listaPalavras = (ListaPalavras*)malloc(sizeof(ListaPalavras));
    criaNovaListaPalavra(listaPalavras);
    inserePalavra(listaPalavras, "gabrie", 10);
    inserePalavra(listaPalavras, "joventivno", 1);
    inserePalavra(listaPalavras, "gato", 7);
    inserePalavra(listaPalavras, "rato", 10);
    imprimePalavras(listaPalavras);
    printf("Removendo**********\n");
    removePalavra(listaPalavras, "gato");
    imprimePalavras(listaPalavras);
    printf("Numero de palavras:%d\n", retornaNumeroPalavras(listaPalavras));*/

    //Dicionario funcionando
    /*Dicionario *dicionario = (Dicionario*)malloc(sizeof(Dicionario));
    inicializarDicionario(dicionario, 'a');
    inseriPalavraDoDic(dicionario, "adulto", 9);
    inseriPalavraDoDic(dicionario, "altista", 9);
    inseriPalavraDoDic(dicionario, "assalto", 8);
    inseriPalavraDoDic(dicionario, "assalto", 9);
    inseriPalavraDoDic(dicionario, "assalto", 10);
    inseriPalavraDoDic(dicionario, "assalto", 10);
    inseriPalavraDoDic(dicionario, "assalto", 11);
     inseriPalavraDoDic(dicionario, "gabriel", 1);
    imprimeListaPalavrasDic(dicionario);
    */

    char texto[100];
    int linha = 0;
    ListaDicionario *dicionario;
    dicionario = (ListaDicionario*)malloc(sizeof(ListaDicionario));
    inicializarListaDicionario(dicionario);

    FILE *file;
    file = fopen("./Entradas/gabriel.txt","r");
            // lendo um arquivo até o final
    if(file == NULL)
        printf("Erro, nao foi possivel abrir o arquivo\n");
    else
        while(fgets(texto, 100, file) != NULL)
            constroiDicionario(dicionario, texto, &linha);
    
    mostraPalavras(dicionario);

    fclose(file);


   /* char c ='a';
    printf("%c", c);
    exibePalavras(dicionario, &c);*/
    return 1;
}