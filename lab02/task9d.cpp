#include <cstdio>

double f(double x) {
    return -2 * x + 2;
}

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%s", x >= 0 && y >= 0 && y <= f(x) ? "Да" : "Нет");
    return 0;
}
