#include <stdio.h>

float nota_duracao(char nota) {
    switch (nota) {
        case 'W': return 1.0;
        case 'H': return 0.5;
        case 'Q': return 0.25;
        case 'E': return 0.125;
        case 'S': return 0.0625;
        case 'T': return 0.03125;
        case 'X': return 0.015625;
        default: return 0.0;
    }
}

int main() {
    char composicao[201];
    while (scanf("%s", composicao) && composicao[0] != '*') {
        int compasso_corr = 0;
        float duracao = 0.0;
        for (int i = 1; composicao[i] != '\0'; i++) {
            if (composicao[i] == '/') {
                if (duracao == 1.0) {
                    compasso_corr++;
                }
                duracao = 0.0;
            } else {
                duracao += nota_duracao(composicao[i]);
            }
        }
        printf("%d\n", compasso_corr);
    }
    return 0;
}
