#include <cstdio>
int main() {
    const int n = 8;
    int f[n];
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i < n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
    for (int x: f) {
        printf("%d\n", x);
    }
    return 0;
}
