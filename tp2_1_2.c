#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main() {
    int i;
    double vt[N], *puntero;
    puntero = vt;

    for(i = 0;i<N; i++) {
        vt[i]=1+rand()%100;
        printf("\n%f", *(puntero + i));
    }

    return 0;
}
