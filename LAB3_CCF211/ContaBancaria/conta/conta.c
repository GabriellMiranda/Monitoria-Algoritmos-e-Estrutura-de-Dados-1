#include "conta.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void inicializaConta(Conta *conta, float saldo, int tipoConta, int abertura, Cliente cliente){
    setDeposito(conta, saldo);
    conta->tipoConta = tipoConta;
    conta->anoAbertura = abertura;
    conta->cliente = cliente;
}

void setSaque(Conta *conta, float saque){
    conta->saldo = conta->saldo - saque;
}

float saldo(Conta *conta){
    return conta->saldo;
}

void setDeposito(Conta *conta, float deposito){
    conta->saldo = conta->saldo + deposito;
}

int obetencaoCredito(Conta *conta){
    if(conta->anoAbertura <= 2017){
        return true;
    }else{
        return false;
    }
}

float getSaldo(Conta *conta){
    return conta->saldo;
}

int getAberturaConta(Conta *conta){
    return conta->anoAbertura;
}

void infoConta(Conta *conta){
    printf("\n******Conta******\n");
    imprimirCliente(&conta->cliente);
    printf("Saldo:%f\n", getSaldo(conta));
    printf("Ano abertura:%d\n",getAberturaConta(conta));
    printf("Obetem crédito:%d", obetencaoCredito(conta));
}