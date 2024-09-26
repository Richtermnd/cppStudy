#include <cmath>
#include <cstdio>

int main() {
    double eps = 1e-3;
    double s;
    int sgn;
    int cnt = 0;
    while ( fabs(1.f / (float)(cnt * 2 + 1)) > eps) {
        sgn = cnt % 2 ? -1 : 1;
        s += sgn * (1.f / (float)(cnt * 2 + 1));
        cnt++;
    }
    printf("%f\n", s);
    return 0;
}
