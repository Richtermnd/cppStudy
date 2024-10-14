#include <cmath>
#include <cstdio>

double f(int n) {
    if (n == 1) {
        return sqrt(2);
    }
    return sqrt(2 + f(n-1));
}

int main() {
    for (int i = 1; i < 9; ++i)
        printf("%f\n", f(i));
    return 0;
}
