#include <stdio.h>
#include <stdlib.h>

void ordenaVet(int *v, int n){
    int aux;
    for(int i =0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(v[i] > v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

void imprimeVet(int *v, int n){
    for(int i =0; i < n; i++){
        printf("%d\n",v[i]);
    }
}

int main(){
    int n = 3;
    int qtdVeiculo[n];
    int contVeiculo= 0;
    int mediaVeiculo;
    for(int i = 0; i < n; i++){
        printf("Digite a quantidade de veiculos do dia %d:\n", i+1);
        scanf("%d", &qtdVeiculo[i]);
        contVeiculo = contVeiculo + qtdVeiculo[i];
    }
    printf("A Média de carros que passaram durante os 30 dias:%d\n", contVeiculo/n);
    ordenaVet(qtdVeiculo, n);
    printf("Vetor ordenado:\n");
    imprimeVet(qtdVeiculo, n);
    return 0;
}