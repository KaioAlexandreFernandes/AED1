#include <stdio.h>

int fatorial(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int converteACMParaDecimal(int acm) {
    int decimal = 0;
    int i = 1;
    while (acm > 0) {
        int digito = acm % 10;
        decimal += digito * fatorial(i);
        acm /= 10;
        i++;
    }
    return decimal;
}

int main() {
    int acm;
    while (scanf("%d", &acm) && acm != 0) {
        printf("%d\n", converteACMParaDecimal(acm));
    }
    return 0;
}
