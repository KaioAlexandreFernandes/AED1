#include <stdio.h>


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    
    return a;
}


int main() {
    
    int N, F1, F2;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %d", &F1, &F2);
        int resultado = gcd(F1, F2);
        printf("%d\n", resultado);
    }
    
    return 0;
}
