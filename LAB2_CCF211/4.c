#include <stdio.h>
#include <stdlib.h>


typedef struct{
    char nome[25];
    char nascimento[11];
    char cpf[10];
}Pessoa;

void inserirDadosPessoa(Pessoa *p){
    printf("Digite o nome:\n");
    scanf("%s", p->nome);
    printf("Digite sua data de nascimento: ex 00/00/00.\n");
    scanf("%s", p->nascimento);
    printf("Digite seu CPF:\n");
    scanf("%s", p->cpf);
}

void imprimirDados(Pessoa p){
    printf("Nome:%s\n", p.nome);
    printf("Nascimento:%s\n", p.nascimento);
    printf("CPF:%s\n",p.cpf);
}


int main(){
    Pessoa pessoa;
    inserirDadosPessoa(&pessoa);
    imprimirDados(pessoa);
    return 1;
}