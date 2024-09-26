#include <cmath>
#include <cstdio>

int main() {
    int n;
    double x;
    scanf("%d", &n);
    scanf("%lf", &x);
    double a, b;
    do {
        a = cos(x + a);
        b = sqrt(x + b);
    } while (--n);
    printf("a - %lf\n", a);
    printf("b - %lf\n", b);
    return 0;
}
