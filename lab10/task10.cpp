#include <cstdio>

int sumDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return n % 10 + sumDigits(n / 10);
}

int main() {
    printf("%d\n", sumDigits(1234));
    return 0;
}
