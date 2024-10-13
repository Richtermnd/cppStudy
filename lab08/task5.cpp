#include <cstdio>

float avg(float a, float b) {
    return (a + b) / 2;
}

float avg(float a, float b, float c) {
    return (a + b + c)/3;
}

float avg(float a, float b, float c, float d) {
    return (a + b + c + d)/4;
}

int main() {
    printf("avg(1, 3): %f\n", avg(1, 3));
    printf("avg(1, 3, 5): %f\n", avg(1, 3, 5));
    printf("avg(1, 3, 5, 7): %f\n", avg(1, 3, 5, 7));
    return 0;
}
