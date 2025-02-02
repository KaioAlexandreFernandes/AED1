#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int num = 1, cont = 1;
        while (num % n != 0) {
            num = (num * 10 + 1) % n;
            cont++;
        }
        printf("%d\n", cont);
    }
    return 0;
}
