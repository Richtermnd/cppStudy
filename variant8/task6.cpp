#include <cstdio>
#include <cmath>


int main() {
    int n;
    float s = 1.f;
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i)
        s += 1/sin(i);
    printf("%f\n", s);

    return 0;
}
