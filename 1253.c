#include <stdio.h>
#include <string.h>

void decodifica(char *mensagem, int deslocamento) {
    int tamanho = strlen(mensagem);
    for (int i = 0; i < tamanho; i++) {
        mensagem[i] = ((mensagem[i] - 'A' - deslocamento + 26) % 26) + 'A';
    }
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        char mensagem[51];
        int deslocamento;
        scanf("%s %d", mensagem, &deslocamento);
        decodifica(mensagem, deslocamento);
        printf("%s\n", mensagem);
    }
    return 0;
}
