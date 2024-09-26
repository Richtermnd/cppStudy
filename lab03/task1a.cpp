#include <cstdio>
float fahr(float tc) {
    return (9.f/5.f) * tc + 32;
}

int main() {
    float tc = -10;
    while ((tc += 10) <= 100) {
        printf("%f\n", fahr(tc));
    }
    return 0;
}
