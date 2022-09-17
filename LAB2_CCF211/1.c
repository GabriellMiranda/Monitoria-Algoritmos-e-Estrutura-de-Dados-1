#include <stdio.h>
#include <stdlib.h>

void zeraVar(int *a, int *b){
    *a = 0;
    *b = 0;
}

int main(){
    int a = 1, b = 2;
    zeraVar(&a,&b);
    printf("a:%d, b:%d\n", a,b);
    return 1;
}


strcpy(recebe, enviar);
strcmp(compara1, comapara2);