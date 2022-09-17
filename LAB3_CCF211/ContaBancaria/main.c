#include <stdio.h>
#include <stdlib.h>
#include "cliente/cliente.h"
#include "conta/conta.h"

int main(){
    Cliente cliente;
    Conta conta;
    inicializaCliente(&cliente,"Gabriel", "0458");
    imprimirCliente(&cliente);
    inicializaConta(&conta, 100.2, 1, 1999, cliente);
    infoConta(&conta);
    return 0;
}