#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        double C;
        int dias = 0;
        scanf("%lf", &C);
        while (C > 1.0) {
            C /= 2.0;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}
