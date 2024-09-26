#include <cmath>
#include <cstdio>

int main() {
    // 1
    double a, b;
    a = 1.5f;
    b = M_PI;
    printf("1)\n");
    printf("a: %f\nb: %f\n", a, b);
    printf("&a:%p\n&b:%p\n", &a, &b);
    printf("&b - &a: %ld\n", (long)&b - (long)&a);
    printf("sizeof(a):%ld\nsizeof(b): %ld\n\n", sizeof(a), sizeof(b));
    
    printf("2)\n");
    double c[5] = {1.5f, M_PI, -0.7f, 3.f, -2.4f};
    printf("c[0]: %lf\n&c[0]: %p\n", *c, c);
    printf("c[1]: %lf\n&c[1]: %p\n", *(c+1), c + 1);
    printf("c[4]: %lf\n&c[4]: %p\n", *(c+4), c + 4);
    printf("&c[0] - &c[1]: %ld\n\n", (long)c - (long)(&c[1]));

    printf("3)\n");
    double *x = new double{a + b}, *y = new double{a - b};
    printf("*x: %f\n*y: %f\n", *x, *y);
    printf("x:%p\ny:%p\n", x, y);
    printf("y - x: %ld\n", (long)&y - (long)&x);
    return 0;
}
