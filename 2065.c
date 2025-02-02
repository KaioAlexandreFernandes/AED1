#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int v[N], c[M], tempo[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &v[i]);
        tempo[i] = 0;
    }

    for (int j = 0; j < M; j++) {
        scanf("%d", &c[j]);
        int minIndex = 0;
        for (int i = 1; i < N; i++) {
            if (tempo[i] < tempo[minIndex]) {
                minIndex = i;
            }
        }
        tempo[minIndex] += v[minIndex] * c[j];
    }

    int maxTempo = tempo[0];
    for (int i = 1; i < N; i++) {
        if (tempo[i] > maxTempo) {
            maxTempo = tempo[i];
        }
    }

    printf("%d\n", maxTempo);
    return 0;
}
