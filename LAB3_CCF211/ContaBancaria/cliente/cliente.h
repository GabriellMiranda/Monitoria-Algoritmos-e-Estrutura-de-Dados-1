#ifndef CLIENTE_H
#define CLIENTE_H

typedef struct{
    char nome[50];
    char cpf[10];
}Cliente;

void inicializaCliente(Cliente *cliente, char *nome, char *cpf);

char* getNome(Cliente *c);

char* getCpf(Cliente *c);

void setNome(Cliente *c, char *nome);

void setCpf(Cliente *c, char *cpf);

void imprimirCliente(Cliente *c);

#endif