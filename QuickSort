
#include <stdio.h>
#include <stdlib.h> 
#include <time.h> 

int const TAM = 400000;

void troca(int vet[], int i, int j)
{
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

int particiona(int vet[], int inicio, int fim)
{
    int pivo, pivo_indice, i;

    pivo = vet[fim];
    pivo_indice = inicio;

    for(i = inicio; i < fim; i++)
    {
        if(vet[i] <= pivo)
        {
            troca(vet, i, pivo_indice);
            pivo_indice++;
        }
    }

    troca(vet, pivo_indice, fim);

    return pivo_indice;
}

int particiona_random(int vet[], int inicio, int fim)
{
    int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
    troca(vet, pivo_indice, fim);
    return particiona(vet, inicio, fim);
}

void quick_sort(int vet[], int inicio, int fim)
{
    if(inicio < fim)
    {
        int pivo_indice = particiona_random(vet, inicio, fim);
        quick_sort(vet, inicio, pivo_indice - 1);
        quick_sort(vet, pivo_indice + 1, fim);
    }
}

int main()
{
    clock_t t; 
    int vetor[TAM];

    srand((unsigned)time(NULL));

    for(int a = 0; a < TAM; a++)
        vetor[a] = rand() % TAM;

    t = clock(); 
    quick_sort(vetor, 0, TAM - 1); // Corrigido para quick_sort e TAM - 1
    t = clock() - t;

    printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 

    return 0;
}
