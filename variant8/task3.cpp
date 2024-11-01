#include <cstdio>

int main() {
    int a, b, c;
    int res;
    int x;
    scanf("%d\n", &x);
    // x^11 - x^7 + x^2 - 2
    // x^7 * (x^4 - 1) + x^2 - 2
    a = x*x;    // x^(1+1)   == x^2
    b = a*a;    // x^(2+2)   == x^4
    c = b*a*x;  // x^(4+2+1) == x^7
    res = c * (b - 1) + a - 2;
    return 0;
}
