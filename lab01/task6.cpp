#include <cstdio>
#define _USE_MATH_DEFINES
#include <cmath>


int main() {
    // v = pi*r^2 * h
    // s = 2*pi*r^2 + 2*pi*r*h = 2*pi*r (r + h)
    double r, h;
    printf("r = ");
    scanf("%lf", &r);
    printf("h = ");
    scanf("%lf", &h);
    printf("V = %f\n", M_PI * r*r * h);
    printf("S = %f", 2 * M_PI * r * (r + h));
    return 0;
}
