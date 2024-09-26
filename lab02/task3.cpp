#include <cmath>
#include <cstdio>


double f(double x) {
    if (x <= -2) {
        return 0;
    }
    if (x <= 0) {
        return x*x + 4*x - 5;
    }
    if (x == 1 || x == -5) {
        return NAN;
    }
    return 1.0f / (x*x + 4*x - 5);
}

int main() {
    double x;
    scanf("%lf", &x);
    printf("%f\n", f(x));
    return 0;
}
