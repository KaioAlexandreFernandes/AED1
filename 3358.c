#include <stdio.h>
#include <string.h>

int ehConsoante(char c) {
    c = tolower(c);
    return !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    int N;
    scanf("%d", &N);

    char sobrenome[43];
    for (int i = 0; i < N; i++) {
        scanf("%s", sobrenome);

        int length = strlen(sobrenome);
        int count = 0;
        int ehDificil = 0;
        for (int j = 0; j < length; j++) {
            if (ehConsoante(sobrenome[j])) {
                count++;
                if (count >= 3) {
                    ehDificil = 1;
                    break;
                }
            } else {
                count = 0;
            }
        }

        if (ehDificil) {
            printf("%s nao eh facil\n", sobrenome);
        } else {
            printf("%s eh facil\n", sobrenome);
        }
    }

    return 0;
}
