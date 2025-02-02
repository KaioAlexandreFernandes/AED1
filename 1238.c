#include <stdio.h>

int main() {
    int N;
    scanf("%d\n", &N);
    for (int i = 0; i < N; i++) {
        char str1[51], str2[51], result[102];
        int idx1 = 0, idx2 = 0, idx_res = 0;
        scanf("%s %s", str1, str2);
        while (str1[idx1] != '\0' && str2[idx2] != '\0') {
            result[idx_res++] = str1[idx1++];
            result[idx_res++] = str2[idx2++];
        }
        while (str1[idx1] != '\0') {
            result[idx_res++] = str1[idx1++];
        }
        while (str2[idx2] != '\0') {
            result[idx_res++] = str2[idx2++];
        }
        result[idx_res] = '\0';
        printf("%s\n", result);
    }
    return 0;
}
