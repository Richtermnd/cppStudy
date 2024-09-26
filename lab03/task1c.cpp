#include <cmath>
#include <cstdio>

#define STEP M_PI / 6
#define STOP 2 * M_PI

int main() {
    for (float x = 0; x <= STOP; x += STEP) {
        printf("%f\n", cos(x));
    }
    return 0;
}
