#include <cstdio>

int max(int *ptr, size_t n) {
    if (n == 1)
        return *ptr;
    int a = *ptr;
    int b = max(++ptr, --n);
    return a > b ? a : b;
}

// It's bullshit
int secondMax(int *ptr, size_t n, int fMax, int sMax) {
    if (*ptr == fMax || *ptr == sMax)
        return n == 1 ? sMax : secondMax(++ptr, --n, fMax, sMax);

    if (*ptr > fMax) {
        sMax = fMax;
        fMax = *ptr;
    } else if (*ptr > sMax)
        sMax = *ptr;
    if (n == 1)
        return sMax;
    return secondMax(++ptr, --n, fMax, sMax);
}

int countMax(int *ptr, size_t n, int mx, int cnt) {
    if (*ptr > mx) {
        mx = *ptr;
        cnt = 1;
    } else
        cnt += mx == *ptr;
    if (n == 1)
        return cnt;
    return countMax(++ptr, --n, mx, cnt);
}

int main() {
    int a[] = {1, 5, 5, 4, 5};
    printf("%d\n", countMax(a, 5, 0, 0));
    return 0;
}
