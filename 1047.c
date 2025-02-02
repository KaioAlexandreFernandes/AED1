#include <stdio.h>

int main() {
    int hora_inicio, min_inicio, hora_fim, min_fim;
    scanf("%d %d %d %d", &hora_inicio, &min_inicio, &hora_fim, &min_fim);

    int inicio = hora_inicio * 60 + min_inicio;
    int fim = hora_fim * 60 + min_fim;

    int duracao;
    if (fim > inicio) {
        duracao = fim - inicio;
    } else {
        duracao = (24 * 60 - inicio) + fim;
    }

    int horas = duracao / 60;
    int minutos = duracao % 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

    return 0;
}
