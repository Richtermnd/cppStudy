#include <cmath>
#include <cstdio>

int triangleArea(int a, int h) {
    return a/2 * h;
}

int triangleArea(int a, int b, int angle) {
    return (int)(a*b/2.f) * sin(angle * M_PI / 180);
}

float triangleArea(float a, float b, float c) {
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


