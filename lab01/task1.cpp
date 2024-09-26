#include <cstdio>
#include <stdlib.h>
#include <math.h>


// По формуле герона
double triangleSize(double a, double b, double c) {
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));

}

void runTests() {
    struct testCase {
        double a;
        double b;
        double c;
        double expected;
    };   testCase tests[] = {
        {3.0, 4.0, 5.0, 6.0},
        {1.5, 2.0, 2.5, 1.5}

    };
    for (auto t : tests) {
        double s = triangleSize(t.a, t.b, t.c);
        if (abs(s - t.expected) > 1e-3) 
            printf("Test failed\n");
        else
            printf("Test Passed\n");
    }
}

int main() {
    // Uncomment to auto tests
    // runTests()

    double a, b, c;
    double s;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("%f\n", triangleSize(a, b, c));
    return 0;
}
