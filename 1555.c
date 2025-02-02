#include <stdio.h>

int rafael(int x, int y) {
    return (3 * x) * (3 * x) + y * y;
}

int beto(int x, int y) {
    return 2 * (x * x) + (5 * y) * (5 * y);
}

int carlos(int x, int y) {
    return -100 * x + y * y * y;
}

int main() {
    int N, x, y;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);
        int r = rafael(x, y);
        int b = beto(x, y);
        int c = carlos(x, y);

        if (r > b && r > c) {
            printf("Rafael ganhou\n");
        } else if (b > r && b > c) {
            printf("Beto ganhou\n");
        } else {
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}
