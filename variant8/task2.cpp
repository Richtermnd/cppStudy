#include <cstdio>

int main() {
    int a, b, c;
    int s, p, mx;
    scanf("%d %d %d", &a, &b, &c);
    s = a + b + c;
    p = a * b * c;
    // Давать тернарный оператор и забирать if было правильным решением.
    printf("%d\n", s % 2 ? b > c ? b : c : p);
    return 0;
}
