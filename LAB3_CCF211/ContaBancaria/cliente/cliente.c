#include "cliente.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void inicializaCliente(Cliente *c, char *nome, char *cpf){
    setNome(c, nome);
    setCpf(c, cpf);
}

char* getNome(Cliente *c){
    return c->nome;
}

char* getCpf(Cliente *c){
    return c->cpf;
}

void setNome(Cliente *c, char *nome){
    strcpy(c->nome, nome);
}

void setCpf(Cliente *c, char *cpf){
    strcpy(c->cpf, cpf);
}

void imprimirCliente(Cliente *c){
    printf("\n*********CLIENTE********\n");
    printf("Nome:%s\n", getNome(c));
    printf("CPF:%s\n", getCpf(c));
}