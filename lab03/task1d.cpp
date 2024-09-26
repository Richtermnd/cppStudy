
#include <cmath>
#include <cstdio>
#include <cstdlib>
#define START -1.5f
#define END 1.5f
#define STEP 0.25f

int main() {
    for (float x = START; x <= END; x += STEP) {
        if (x > 1.f)
            printf("%f\n", 1 + sqrt(fabs(cos(x))));
        else if (x < 0.5f)
            printf("%f\n", 1 - x*x);
        else
            printf("%f\n", x + 1);
    }
    return 0;
}
