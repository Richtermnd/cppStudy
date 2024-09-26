#include <cstdio>
int main() {
    double a, b, c;
    printf("Sides separated by spaces\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("V = %f\n", a * b * c);
    printf("S = %f\n", 2 * (a * b + a * c + b * c));
    return 0;
}
