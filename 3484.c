#include <stdio.h>
#include <stdlib.h>

struct Node {
    int altura;
    struct Node* esquerda;
    struct Node* direita;
};

struct Node* criarNo(int altura) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    novoNo->altura = altura;
    novoNo->esquerda = NULL;
    novoNo->direita = NULL;
    return novoNo;
}

struct Node* inserirNo(struct Node* raiz, int altura) {
    if (raiz == NULL) {
        return criarNo(altura);
    }
    if (altura < raiz->altura) {
        raiz->esquerda = inserirNo(raiz->esquerda, altura);
    } else {
        raiz->direita = inserirNo(raiz->direita, altura);
    }
    return raiz;
}

void encontrarMenorPorNivel(struct Node* raiz) {
    if (raiz == NULL) return;

    struct Node* fila[250];
    int niveis[250];
    int inicio = 0, fim = 0;

    fila[fim] = raiz;
    niveis[fim] = 0;
    fim++;

    int menorPorNivel[250];
    for (int i = 0; i < 250; i++) {
        menorPorNivel[i] = 1000;
    }

    while (inicio < fim) {
        struct Node* atual = fila[inicio];
        int nivelAtual = niveis[inicio];
        inicio++;

        if (atual->altura < menorPorNivel[nivelAtual]) {
            menorPorNivel[nivelAtual] = atual->altura;
        }

        if (atual->esquerda != NULL) {
            fila[fim] = atual->esquerda;
            niveis[fim] = nivelAtual + 1;
            fim++;
        }
        if (atual->direita != NULL) {
            fila[fim] = atual->direita;
            niveis[fim] = nivelAtual + 1;
            fim++;
        }
    }

    for (int i = 0; i < 250; i++) {
        if (menorPorNivel[i] != 1000) {
            printf("%d %d\n", i, menorPorNivel[i]);
        }
    }
}

int main() {
    int N;
    scanf("%d", &N);

    int alturas[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &alturas[i]);
    }

    struct Node* raiz = NULL;
    for (int i = 0; i < N; i++) {
        raiz = inserirNo(raiz, alturas[i]);
    }

    encontrarMenorPorNivel(raiz);

    return 0;
}
