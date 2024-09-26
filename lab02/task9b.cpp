#include <cmath>
#include <cstdio>

int main() {
    double x, y, dst;
    scanf("%lf %lf", &x, &y);
    dst = sqrt(x*x + y*y);
    printf("%s\n", (y >= 0) && (dst <= 5) ? "Да" : "Нет");
    return 0;
}
