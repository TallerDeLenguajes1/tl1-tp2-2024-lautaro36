#include<stdio.h>
#include <stdlib.h>
#define N 5
#define M 7

int main() {
    int mt[N][M];
    int *punt= mt;

    for(int i = 0;i<N; i++) {
        punt = mt[i];
        for(int j = 0;j<M; j++) {
            mt[i][j]=1+rand()%100;
            printf("%d \t", *(punt + j) );
            }
        printf("\n");
    }

    return 0;
}
