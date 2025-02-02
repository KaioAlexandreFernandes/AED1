#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char num[12], cutoff[7];
    while (scanf("%s %s", num, cutoff) != EOF) {
        double num_val = atof(num);
        double cutoff_val = atof(cutoff);

        int parte_inteira = (int)num_val;
        double parte_fracionaria = num_val - parte_inteira;

        if (parte_fracionaria > cutoff_val) {
            printf("%d\n", parte_inteira + 1);
        } else {
            printf("%d\n", parte_inteira);
        }
    }
    return 0;
}
