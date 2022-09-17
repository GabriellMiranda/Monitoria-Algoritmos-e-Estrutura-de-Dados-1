#include <stdio.h>
#include <stdlib.h>

void rotaciona(int *a, int *b, int *c){
    int aux = *b, aux1 = *c;
    *b = *a; *c = aux; *a = aux1;
}

int main(){
    int a = 1, b = 2, c = 3;
    rotaciona(&a,&b, &c);
    printf("a:%d, b:%d, c:%d\n", a,b, c);
    return 1;
}