#include <cstdio>

int main() {
    double a, b, c, r, z;
    printf("Введите по порядку стороны коробки, высоту коробки, радиус торта и его высоту через пробел");
    scanf("%lf %lf %lf", &a, &b, &c, &r, &z);
    if (a < 2 * r || b < 2 * r)
        printf("Нет\n");
    if (c < z)
        printf("Нет\n");
    printf("Да\n");
    return 0;
}
