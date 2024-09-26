#include <cstdio>

int main() {
    double x, y;
    scanf("%lf %lf", &x, &y);
    printf("%s\n", (x >= -2 && x <= 0) && (y >= 0 && y <= 1) ? "Да": "Нет");
    return 0;
}
