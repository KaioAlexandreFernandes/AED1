#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[51];
    float preco;
} Produto;

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int M;
        scanf("%d", &M);
        Produto produtos[M];
        for (int j = 0; j < M; j++) {
            scanf("%s %f", produtos[j].nome, &produtos[j].preco);
        }
        int P;
        scanf("%d", &P);
        float total = 0.0;
        for (int j = 0; j < P; j++) {
            char nome[51];
            int quantidade;
            scanf("%s %d", nome, &quantidade);
            for (int k = 0; k < M; k++) {
                if (strcmp(nome, produtos[k].nome) == 0) {
                    total += produtos[k].preco * quantidade;
                    break;
                }
            }
        }
        printf("R$ %.2f\n", total);
    }
    return 0;
}
