#include <stdio.h>

int main() {
    int R, N, case_number = 1;
    while (scanf("%d %d", &R, &N) && (R != 0 || N != 0)) {
        if (N >= R) {
            printf("Case %d: 0\n", case_number);
        } else {
            int sufixos_necessarios = (R - N + (N - 1)) / N;
            if (sufixos_necessarios > 26) {
                printf("Case %d: impossible\n", case_number);
            } else {
                printf("Case %d: %d\n", case_number, sufixos_necessarios);
            }
        }
        case_number++;
    }
    return 0;
}
