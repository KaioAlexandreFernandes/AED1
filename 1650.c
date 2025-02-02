#include <stdio.h>

int main() {
    int n, m, c;

    while (scanf("%d %d %d", &n, &m, &c) && (n != 0 || m != 0 || c != 0)) {
        int tabuleiros = ((n - 7) * (m - 7) + c) / 2;
        printf("%d\n", tabuleiros);
    }

    return 0;
}
