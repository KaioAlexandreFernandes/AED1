#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[20];
    while (scanf("%s", input) != EOF) {
        if (input[0] == '-') break;
        if (input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
            long int decimalValue = strtol(input, NULL, 16);
            printf("%ld\n", decimalValue);
        } else {
            int decimalValue = atoi(input);
            printf("0x%X\n", decimalValue);
        }
    }
    return 0;
}
