#include <cstdio>

double min(double a, double b) {
    return a < b ? a : b;
}

double max(double a, double b) {
    return a > b ? b : a;
}

int main() {
    double x, y, z;
    printf("Введите стороны кирпича через пробел\n");
    scanf("%lf %lf %lf", &x, &y, &z);
    double a, b;
    printf("Введите стороны отверстия через пробел\n");
    scanf("%lf %lf", &a, &b);
    
    double smallA, smallB, largest;
    smallA = (x <= y && x <= z) ? x : min(y, z);
    smallB = (smallA == x) ? min(y, z) : min(x, y + z - smallA);
    if (max(a, b) > max(smallA, smallB) && min(a, b) > min(smallA, smallB))
        printf("Да\n");
    else
        printf("Нет\n");
    return 0;
}
