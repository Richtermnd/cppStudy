#include <cstdio>

float sum(float a, float b) {
    return a + b;
}

float sub(float a, float b) {
    return a - b;
}

float mul(float a, float b) {
    return a * b;
}


int main() {
    float a, b;
    scanf("%f %f", &a, &b);
    printf("%f\n", sum(mul(5, sum(sub(a, 2), b)), mul(1000, a)));
    return 0;
}
