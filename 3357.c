#include <stdio.h>
#include <string.h>

int main() {
    int N;
    float L, Q;
    scanf("%d", &N);
    scanf("%f %f", &L, &Q);

    char nomes[N][13];
    for (int i = 0; i < N; i++) {
        scanf("%s", nomes[i]);
    }

    int index = 0;
    while (L > Q) {
        L -= Q;
        index = (index + 1) % N;
    }

    printf("%s %.1f\n", nomes[index], L);

    return 0;
}
