#include <cmath>
#include <cstdio>

int main() {
    double x, y, dst;
    scanf("%lf %lf", &x, &y);
    dst = sqrt(x*x + y*y);
    printf("%s\n", x > 0 && dst >= 3 && dst <= 6 ? "Да" : "Нет");
    return 0;
}
