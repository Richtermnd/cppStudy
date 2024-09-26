#include <cmath>
#include <cstdio>

int main() {
    float x = -0.5f;
    while ((x += 0.5f) <= 5.f) {
        printf("%f\n", log(x + 1) * sin(x));
    }
    return 0;
}
