#include <cstdio>

int max(int a, int b, int c) {
    if (a >= b && a >= c)
        return a;
    if (b >= a && b >= c)
        return b;
    return c;
}

int min(int a, int b, int c) {
    if (a <= b && a <= c)
        return a;
    if (b <= a && b <= c)
        return b;
    return c;
}
int main() {
    int x, y, z;
    int a, b, c, d;
    int mn, mx;
    scanf("%d %d %d", &x, &y, &z);
    mn = min(x, y, z);
    mx = max(x, y, z);
    a = x * (x > 10) + y * (y > 10) + z * (z > 10);
    b = (x % 2 == 0) + (y % 2 == 0) + (z % 2 == 0);
    c = x + y + z - mx - mn;
    d = x == mn ? 1 : y == mn ? 2 : 3;
    printf("a - %d\nb - %d\nc - %d\nd - %d\n", a, b, c, d);
    return 0;
}
