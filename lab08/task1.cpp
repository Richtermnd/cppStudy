#include <cstdio>

void fahr(float c, float &f) {
    f = (9.f/5.f)*c+32;
}

void kelv(float c, float &k) {
    k = c+273;
}

void both(float c, float &f, float &k) {
    fahr(c, f);
    kelv(c, k);
}

int main() {
    float c = 125.5f;
    float f, k;
    fahr(c, f);
    kelv(c, k);
    printf("%fC %fF %fK\n", c, f, k);
    both(c, f, k);
    printf("%fC %fF %fK\n", c, f, k);
    return 0;
}
