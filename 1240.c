#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    
    while (N > 0) {
        char A[100], B[100];
        scanf("%s %s", A, B);

        int i = 0, j = 0;
        while (A[i] != '\0') {
            i++;
        }
        while (B[j] != '\0') {
            j++;
        }

        int k = 0;
        while (k < j && A[i - j + k] == B[k]) {
            k++;
        }

        if (k == j) {
            printf("encaixa\n");
        } else {
            printf("nao encaixa\n");
        }

        N--;
    }
    return 0;
}
