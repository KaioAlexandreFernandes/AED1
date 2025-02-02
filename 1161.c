#include <stdio.h>

unsigned long long fatorial(int num) {
    unsigned long long resultado = 1;
    for (int i = 1; i <= num; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int M, N;
    while (scanf("%d %d", &M, &N) != EOF) {
        unsigned long long soma = fatorial(M) + fatorial(N);
        printf("%llu\n", soma);
    }
    return 0;
}
