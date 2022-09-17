#include <stdio.h>
#include <stdlib.h>


int main(){
    int n = 3;
    int intervalo;
    int mat[n][n];
    printf("Digite o valor do intervalo fechado:\n");
    scanf("%d", &intervalo);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            mat[i][j] = 1 + rand() % intervalo; 
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
           printf("%d, ", mat[i][j]);  
        }
        printf("\n");
    }

    return 0;
}