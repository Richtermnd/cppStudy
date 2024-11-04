#include <cstdio>
#include <cmath>


int main() {
    int n;
    float s = 1.f;
    float d = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        d += sin(i);
        s += 1/d;
    }
    printf("%f\n", s);

    return 0;
}
