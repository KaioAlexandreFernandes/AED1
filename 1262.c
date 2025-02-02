#include <stdio.h>
#include <string.h>

int calcula_ciclos(char *historico, int processos) {
    int tamanho = strlen(historico);
    int ciclos = 0;
    int leituras = 0;

    for (int i = 0; i < tamanho; i++) {
        if (historico[i] == 'R') {
            leituras++;
            if (leituras == processos) {
                ciclos++;
                leituras = 0;
            }
        } else if (historico[i] == 'W') {
            if (leituras > 0) {
                ciclos++;
                leituras = 0;
            }
            ciclos++;
        }
    }

    if (leituras > 0) {
        ciclos++;
    }

    return ciclos;
}

int main() {
    char historico[51];
    int processos;

    while (scanf("%s %d", historico, &processos) != EOF) {
        printf("%d\n", calcula_ciclos(historico, processos));
    }

    return 0;
}
