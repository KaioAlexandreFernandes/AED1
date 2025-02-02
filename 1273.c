#include <stdio.h>
#include <string.h>

int main() {
    int N;
    int primeiro_caso = 1;

    while (scanf("%d", &N) && N != 0) {
        if (!primeiro_caso) {
            printf("\n");
        }
        primeiro_caso = 0;

        char palavras[N][51];
        int max_length = 0;

        for (int i = 0; i < N; i++) {
            scanf("%s", palavras[i]);
            int length = strlen(palavras[i]);
            if (length > max_length) {
                max_length = length;
            }
        }

        for (int i = 0; i < N; i++) {
            int espacos = max_length - strlen(palavras[i]);
            for (int j = 0; j < espacos; j++) {
                printf(" ");
            }
            printf("%s\n", palavras[i]);
        }
    }

    return 0;
}
