#include <cstdio>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int main() {
    printf("%d\n", countDigits(0)); // some bug...
    printf("%d\n", countDigits(1));
    printf("%d\n", countDigits(10));
    printf("%d\n", countDigits(123));
    return 0;
}
