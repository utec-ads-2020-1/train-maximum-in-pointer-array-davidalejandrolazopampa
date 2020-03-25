//
// Created by David Lazo on 24/03/2020.
//
#include <stdio.h>


int max(int *iptr[], int n){
/*
 * Contenido
 */
}
int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &(array[(i + 3) % n]));
        iptr[i] = &(array[(i + 3) % n]);
    }
    printf("%d\n", max(iptr, n));
    return 0;
}
