#include <cmath>
#include <cstdio>
#include <cstdlib>

int sgn(float a) {
    return a == 0 ? 0: a < 0 ? -1 : 1;
}

double root(double (*f)(double), double a, double b, double eps) {
    double m;
    double fa, fb, fm;
    fa = f(a);
    fb = f(b);

    // impossible for biection method
    if (sgn(fa) == sgn(fb)) {
        return NAN;
    }

    // finding mid value
    m = (a + b) / 2;
    fm = f(m);

    // If m is root
    if (fm == 0) {
        return m;
    }

    if (sgn(fa) != sgn(fm)) {
        if (std::abs(fm - fa) < eps)
            return m;
        else {
            return root(f, a, m, eps);
        }
    }
    else {
        if (std::abs(fm - fb) < eps)
            return m;
        else {
            return root(f, m, b, eps);
        }
    }

}

double cube(double x) {
    return x*x*x;
}

int main() {
    printf("%f\n", root(cube, -5, 4, 1e-5));
    return 0;
}
