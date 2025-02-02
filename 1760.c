#include <stdio.h>
#include <math.h>

double calcula_area(int l) {
    double area_inicial = (l * l * sqrt(3)) / 4.0;
    double area_total = area_inicial * 8 / 5;
    return area_total;
}

int main() {
    int l;
    while (scanf("%d", &l) != EOF) {
        printf("%.2f\n", calcula_area(l));
    }
    return 0;
}
