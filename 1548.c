#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int nota;
    int posicao_original;
} Aluno;

int compara(const void *a, const void *b) {
    Aluno *alunoA = (Aluno *)a;
    Aluno *alunoB = (Aluno *)b;
    return alunoB->nota - alunoA->nota;
}

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int M;
        scanf("%d", &M);

        Aluno alunos[M];
        for (int j = 0; j < M; j++) {
            scanf("%d", &alunos[j].nota);
            alunos[j].posicao_original = j;
        }

        qsort(alunos, M, sizeof(Aluno), compara);

        int inalterados = 0;
        for (int j = 0; j < M; j++) {
            if (alunos[j].posicao_original == j) {
                inalterados++;
            }
        }

        printf("%d\n", inalterados);
    }

    return 0;
}
