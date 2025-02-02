#include <stdio.h>
#include <math.h>

int main() {
    int D, VF, VG;
    while (scanf("%d %d %d", &D, &VF, &VG) != EOF) {
        double tempo_fugitivo = 12.0 / VF;
        double distancia_guarda = sqrt(12.0 * 12.0 + D * D);
        double tempo_guarda = distancia_guarda / VG;
        if (tempo_guarda <= tempo_fugitivo) {
            printf("S\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
