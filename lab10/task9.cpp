#include <cstdio>

int binomial(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomial(n - 1, k) + binomial(n - 1, k - 1);
}

int main() {
    for (int n = 1; n < 10; ++n)
        for (int k = 1; k <= n; ++k)
            printf("C(%d, %d): %d\n", n, k, binomial(n, k));
    return 0;
}
