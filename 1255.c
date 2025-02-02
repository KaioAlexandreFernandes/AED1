#include <stdio.h>

int ehLetra(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

char paraMinusculo(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    int N;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        char texto[201];
        int freq[26] = {0}, freq_max = 0;
        fgets(texto, 201, stdin);
        for (int j = 0; texto[j] != '\0'; j++) {
            if (ehLetra(texto[j])) {
                int idx = paraMinusculo(texto[j]) - 'a';
                freq[idx]++;
                if (freq[idx] > freq_max) {
                    freq_max = freq[idx];
                }
            }
        }
        for (int j = 0; j < 26; j++) {
            if (freq[j] == freq_max) {
                printf("%c", j + 'a');
            }
        }
        printf("\n");
    }
    return 0;
}
