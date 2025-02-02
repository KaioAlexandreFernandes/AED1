#include <stdio.h>


int main() {
    int N;
    scanf("%d", &N);
    char linha[1001];
    while (N > 0) {
        scanf("%s", linha);
        int i, diamantes = 0, open = 0;
        for (i = 0; linha[i] != '\0'; i++) {
            if (linha[i] == '<') {
                open++;
            } else if (linha[i] == '>' && open > 0) {
                open--;
                diamantes++;
            }
        }
        
        printf("%d\n", diamantes);
        N--;
    }
    return 0;
}
