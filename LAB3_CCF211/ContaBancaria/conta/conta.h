#ifndef CONTA_H
#define CONTA_H
#include "../cliente/cliente.h"

typedef struct{
    int numero;
    float saldo;
    int tipoConta;
    int anoAbertura;
    Cliente cliente;
}Conta;

void inicializaConta(Conta *conta, float saldo, int tipoConta, int abertura, Cliente cliente);

void deposito(Conta *conta, float deposito);

int obetencaoCredito(Conta *conta);

void setSaque(Conta *conta, float saque);

void setDeposito(Conta *conta, float saldo);

float getSaldo(Conta *conta);

void infoConta(Conta *conta);


#endif