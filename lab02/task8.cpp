#include <cmath>
#include <cstdio>

int main() {
    double x, y, dist;
    scanf("%lf %lf", &x, &y);
    dist = sqrt(x * x + y * y);
    if (dist <= 2.0f)
        printf("10\n");
    else if (dist <= 4.0f)
        printf("5\n");
    else
        printf("0\n");
    return 0;
}
