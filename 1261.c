#include <stdio.h>
#include <stdlib.h>

int comparar_pares(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int comparar_impares(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);

    int numeros[N], pares[N], impares[N];
    int p = 0, i = 0;

    for (int j = 0; j < N; j++) {
        scanf("%d", &numeros[j]);
        if (numeros[j] % 2 == 0) {
            pares[p++] = numeros[j];
        } else {
            impares[i++] = numeros[j];
        }
    }

    qsort(pares, p, sizeof(int), comparar_pares);
    qsort(impares, i, sizeof(int), comparar_impares);

    for (int j = 0; j < p; j++) {
        printf("%d\n", pares[j]);
    }
    for (int j = 0; j < i; j++) {
        printf("%d\n", impares[j]);
    }

    return 0;
}
