#include <cstdio>

int main() {
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);
    if (x < y+z && y < x+z && z < x+y)
        printf("Да\n");
    else
        printf("Нет\n");

    bool isRight; // Прямоугольный?
    if (x*x == y*y + z*z || y*y == x*x + z*z || z*z == x*x + y*y)
        printf("Прямоугольный\n");
    else if (x == y && x == z)
        printf("Равносторонний\n");
    else if (x == y || x == z || y == z)
        printf("Равнобедренный\n");
    else
        printf("Никакой\n");
    return 0;
}
