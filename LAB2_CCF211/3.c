#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int h;
    int m;
}HM;

void calculaHoraMinuto(int min, HM * hm){
    if(min < 60){
        hm->h = 0;
        hm->m = min;
    }else{
        hm->h = (min - (min % 60))/60; 
        hm->m = (min % 60);
    }

}


int main(){
    HM hm;
    int minutos;
    printf("Digite a hora em minutos:\n");
    scanf("%d", &minutos);
    calculaHoraMinuto(minutos, &hm);
    printf("%d:%d\n", hm.h, hm.m);
    return 1;
}