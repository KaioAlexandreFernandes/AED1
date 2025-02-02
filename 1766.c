#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[101];
    int peso;
    int idade;
    float altura;
} Rena;

int compara(const void *a, const void *b) {
    Rena *renaA = (Rena *)a;
    Rena *renaB = (Rena *)b;

    if (renaA->peso != renaB->peso) {
        return renaB->peso - renaA->peso;
    }
    if (renaA->idade != renaB->idade) {
        return renaA->idade - renaB->idade;
    }
    if (renaA->altura != renaB->altura) {
        return (renaA->altura > renaB->altura) - (renaA->altura < renaB->altura);
    }
    return strcmp(renaA->nome, renaB->nome);
}

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 1; i <= T; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        Rena renas[N];
        for (int j = 0; j < N; j++) {
            scanf("%s %d %d %f", renas[j].nome, &renas[j].peso, &renas[j].idade, &renas[j].altura);
        }

        qsort(renas, N, sizeof(Rena), compara);

        printf("CENARIO {%d}\n", i);
        for (int j = 0; j < M; j++) {
            printf("%d - %s\n", j + 1, renas[j].nome);
        }
    }

    return 0;
}
