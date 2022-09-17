#include <stdlib.h>
#include <stdio.h>

int exibeData(int value){
  
    int aux = value%30;
    int mes = (value - aux)/30;
    value = value%30;
    if(mes < 1){
         printf("%d de Janeiro", value); return 0;
    }
    if(mes >= 1 && mes <2){ 
        printf("%d de Fevereiro", value); return 0;
    }
    if(mes >= 2 && mes <3){ 
        printf("%d de Março", value); return 0;
    }
    if(mes >= 3 && mes <4){
        printf("%d de Abril", value); return 0;
    }
    if(mes >= 4 && mes <5){
        printf("%d de Maio", value); return 0;
    }
    if(mes >= 5 && mes <6){
        printf("%d de Junho", value); return 0;
    }
    if(mes >= 6 && mes <7){ 
        printf("%d de Julho", value); return 0;
    }
    if(mes >= 7 && mes <8){ 
        printf("%d de Agosto", value); return 0;
    }
    if(mes >= 8 && mes <9){
        printf("%d de Setembro", value); return 0;
    }
    if(mes >= 9 && mes <10){
        printf("%d de Outubro", value); return 0;
    }
    if(mes >= 10 && mes <11){
        printf("%d de Novembro", value); return 0;
    }
    if(mes >= 11 && mes <12){ 
        printf("%d de Dezembro", value); return 0;
    }
    return 1;
}

void main(){
    int value;
    printf("Digite um número:");
    scanf("%d", &value);
    if(exibeData(value) == 1){
        printf("Não existe uma data válida para este número!!");
    };
}