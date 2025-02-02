#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        char A[1001], B[1001];
        scanf("%s %s", A, B);

        int i = 0, j = 0;

        while (A[i] != '\0') {
            i++;
        }
        while (B[j] != '\0') {
            j++;
        }

        int matches = 1;
        while (j > 0) {
            if (A[--i] != B[--j]) {
                matches = 0;
                break;
            }
        }

        if (matches) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }
    }

    return 0;
}
