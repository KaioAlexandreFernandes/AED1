#include <stdio.h>
#include <string.h>

int calcula_hash(char linhas[][51], int L) {
    int hash = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < strlen(linhas[i]); j++) {
            hash += (linhas[i][j] - 'A') + i + j;
        }
    }
    return hash;
}

int main() {
    int N, L;
    char linhas[100][51];

    scanf("%d", &N);
    for (int k = 0; k < N; k++) {
        scanf("%d", &L);
        for (int i = 0; i < L; i++) {
            scanf("%s", linhas[i]);
        }
        printf("%d\n", calcula_hash(linhas, L));
    }
    return 0;
}
