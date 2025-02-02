#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);
    char num[101];
    int ledsPerDigit[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    for (int i = 0; i < N; i++) {
        scanf("%s", num);
        int totalLeds = 0;
        for (int j = 0; j < strlen(num); j++) {
            totalLeds += ledsPerDigit[num[j] - '0'];
        }
        printf("%d leds\n", totalLeds);
    }
    return 0;
}
