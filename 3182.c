#include <stdio.h>

int main() {
    int N, B, H, W;

    while (scanf("%d %d %d %d", &N, &B, &H, &W) == 4) {
        int custo_minimo = B + 1;

        for (int i = 0; i < H; i++) {
            int P;
            scanf("%d", &P);

            for (int j = 0; j < W; j++) {
                int A;
                scanf("%d", &A);

                if (A >= N && P * N <= B) {
                    int custo = P * N;
                    if (custo < custo_minimo) {
                        custo_minimo = custo;
                    }
                }
            }
        }

        if (custo_minimo <= B) {
            printf("%d\n", custo_minimo);
        } else {
            printf("stay home\n");
        }
    }

    return 0;
}
