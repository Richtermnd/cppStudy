#include <cfloat>
#include <cmath>
#include <cstdio>

float f(float x) {
    if (x < 0)
        return 2 + 1.f/3.f;
    if (x <= 2*M_PI)
        return x*x - 3;
    return (1 + x*x) / (2*x);
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%f\n", 12.5 + f(2) + - f(4)*f(10) + f(a) - f(b) + f(a*b));

    float xs[7] = {};
    float ys[7] = {};
    for (float *x = xs, *y = ys; (x - xs) < 7; ++x, ++y) {
        scanf("%f", x);
        *y = f(*x);
    }

    float mx = FLT_MIN;
    int cnt;
    for (float *y = ys; (y - ys) < 7; ++y) {
        printf("%f\n", *y);
        cnt += *y < 0;
        mx = *y > mx ? *y : mx;
    }
    printf("%f\n", mx);
    printf("%d\n", cnt);
    return 0;
}
