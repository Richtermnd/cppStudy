#include <cmath>
#include <cstdio>

float dist(float x1, float y1, float x2, float y2) {
    float dx = x2 - x1, dy = y2 - y1;
    return sqrt(dx*dx + dy*dy);
}

float triangleSize(float x1, float y1, float x2, float y2, float x3, float y3) {
    float a, b, c;
    a = dist(x1, y1, x2, y2);
    b = dist(x1, y1, x3, y3);
    c = dist(x2, y2, x3, y3);
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));

}

// TODO: it's very difficult to calculate...
float rectSize(
        float x1, float y1,
        float x2, float y2,
        float x3, float y3,
        float x4, float y4
        ) {
    return 0;
}

int main() {
    float x1, y1;
    float x2, y2;
    scanf("%f %f", &x1, &y1);
    scanf("%f %f", &x2, &y2);
    printf("a\n%f\n", dist(x1, y1, x2, y2));
    printf("b\n%f\n", dist(0, 0, x1, y1));
    printf("%f\n", dist(0, 0, x2, y2));

    float x3, y3;
    scanf("%f %f", &x3, &y3);
    printf("c\n%f\n", triangleSize(x1, y1, x2, y2, x3, y3));

    return 0;
}
