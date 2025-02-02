#include <stdio.h>
#include <string.h>

char para_maiuscula(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    }
    return c;
}

char para_minuscula(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c - 'A' + 'a';
    }
    return c;
}

void transforma_em_dancante(char *sentenca) {
    int tamanho = strlen(sentenca);
    int maiuscula = 1;  // Inicia com maiúscula

    for (int i = 0; i < tamanho; i++) {
        if (sentenca[i] != ' ') {
            if (maiuscula) {
                sentenca[i] = para_maiuscula(sentenca[i]);
            } else {
                sentenca[i] = para_minuscula(sentenca[i]);
            }
            maiuscula = !maiuscula;  // Alterna o case
        }
    }
}

int main() {
    char sentenca[51];
    while (fgets(sentenca, sizeof(sentenca), stdin)) {
        // Remover a nova linha manualmente, se houver
        if (sentenca[strlen(sentenca) - 1] == '\n') {
            sentenca[strlen(sentenca) - 1] = '\0';
        }
        transforma_em_dancante(sentenca);
        printf("%s\n", sentenca);
    }
    return 0;
}
