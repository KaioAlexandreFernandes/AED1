#include <stdio.h>
#include <stdlib.h>

int compara(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int N;
    scanf("%d", &N);
    int Ti[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &Ti[i]);
    }

    qsort(Ti, N, sizeof(int), compara);

    int max_dia = 0;
    for (int i = 0; i < N; i++) {
        int dia_maturidade = Ti[i] + i + 1;
        if (dia_maturidade > max_dia) {
            max_dia = dia_maturidade;
        }
    }

    printf("%d\n", max_dia + 1);

    return 0;
}
