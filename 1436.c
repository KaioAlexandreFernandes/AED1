#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        int idades[N];
        for (int j = 0; j < N; j++) {
            scanf("%d", &idades[j]);
        }
        printf("Case %d: %d\n", i, idades[N / 2]);
    }
    return 0;
}
