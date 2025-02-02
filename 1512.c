#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

int main() {
    long long N, A, B;
    while (scanf("%lld %lld %lld", &N, &A, &B) && (N != 0 || A != 0 || B != 0)) {
        long long pintados = (N / A) + (N / B) - (N / lcm(A, B));
        printf("%lld\n", pintados);
    }
    return 0;
}
