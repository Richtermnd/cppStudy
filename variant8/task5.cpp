#include <cmath>
#include <cstdio>

bool isBelongs(float x, float y) {
    if (std::abs(x) > 10 || std::abs(y) > 10) // Совсем не там где надо
        return false;
    if (y >= 0 && x >= 0) // I Четверть
        return y <= -x + 10;
    if (y >= 0 && x <= 0) // II четверть
        return x >= -5;
    return x*x + y*y <= 100 && y >= -5; // III и IV четверть
}

int main() {
    int n;
    float x, y;
    printf("Enter n: ");
    scanf("%d", &n);
    do {
        printf("Enter point: ");
        scanf("%f %f", &x, &y);
        printf("%s\n", isBelongs(x, y) ? "YES" : "NO");
    } while(n--);
    return 0;
}
