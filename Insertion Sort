#include <math.h>
#include <stdio.h>
#include <time.h> 

int const TAM = 400000; 


void insertionSort(int arr[], int TAM) {

    for (int i = 1; i < TAM; i++) {
        int key = arr[i];
        int j = i - 1;


        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        
        arr[j + 1] = key;
    }
}

int main() {
    clock_t t; 
      int vetor[TAM];

      
      srand((unsigned)time(NULL));

      
      for(int a = 0; a < TAM; a++)
          vetor[a] = rand() % TAM;

     
      t = clock();
      insertionSort(vetor, TAM);
      t = clock() - t; 

     
      printf("Tempo de execucao: %lf ms\n", ((double)t)/((CLOCKS_PER_SEC/1000))); 

    return 0;
}
