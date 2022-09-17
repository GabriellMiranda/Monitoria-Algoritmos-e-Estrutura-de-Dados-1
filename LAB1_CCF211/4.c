#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void soma(){
    int qtd, value, soma=0;
    printf("Digite quantos valores deseja somar:\n");
    scanf("%d", &qtd);
    for(int i = 0; i < qtd; i++){
        printf("Digite o %dº valor:\n", i+1);
        scanf("%d", &value);
        soma = value + soma;
    }
    printf("Resultado:%d\n", soma);
}

void subtracao(){
    int qtd, value, subtracao=0;
    printf("Digite quantos valores deseja subtrair:\n");
    scanf("%d", &qtd);
    for(int i = 0; i < qtd; i++){
        printf("Digite o %dº valor:\n", i+1);
        scanf("%d", &value);
        subtracao = value - subtracao;
    }
    printf("Resultado:%d\n", subtracao);
}

void multiplicao(){
    int qtd, value, multiplica = 1;
    printf("Digite quantos valores deseja multiplicar:\n");
    scanf("%d", &qtd);
    for(int i = 0; i < qtd; i++){
        printf("Digite o %dº valor:\n", i+1);
        scanf("%d", &value);
        multiplica = value * multiplica;
    }
    printf("Resultado:%d\n", multiplica);
}

void divisao(){
    float divisor, dividendo;
    printf("Digite o divisor:\n");
    scanf("%f", &divisor);
    printf("Digite o dividendo:\n");
    scanf("%f", &dividendo);
    printf("Resultado:%f\n", dividendo/divisor);
}

int main(){
    char operacao;
    while(1){
        setbuf(stdin, 0);
        printf("Digite uma operação para fazer:\n");
        scanf("%c", &operacao);
        switch (operacao){
        case '+':
            soma();
            break;

        case '-':
            subtracao();
            break;
        
        case '*':
            multiplicao();
            break;
        
        case '/':
            divisao();
            break;
        
        default:
            printf("Operação invalida!!\n");
            break;
        }
    }

    return 0;
}