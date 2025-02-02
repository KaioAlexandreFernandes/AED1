#include <stdio.h>
#include <math.h>

int main() {
    int R, W, L;
    int pedido = 1;

    while (scanf("%d", &R) && R != 0) {
        scanf("%d %d", &W, &L);
        double diagonal = sqrt(W * W + L * L);
        if (diagonal <= 2 * R) {
            printf("Pizza %d fits on the table.\n", pedido);
        } else {
            printf("Pizza %d does not fit on the table.\n", pedido);
        }
        pedido++;
    }

    return 0;
}
