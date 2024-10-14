#include <cstdio>

void bin(int n) {
    if (n == 0)
        return;
    bin(n >> 1);
    printf("%d", n % 2);
}

int main() {
    for (int i = 0; i <= 2 << 4; ++i) {
        bin(i);
        printf("\n");
    }
    return 0;
}
