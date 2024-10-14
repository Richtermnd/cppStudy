#include <cstddef>
#include <cstdio>

bool anyPositive(int *ptr, size_t n) {
    if (n == 0)
        return false;
    if (*ptr > 0)
        return true;
    return anyPositive(++ptr, --n);
}

bool hasLargerThan(int *ptr, int x, size_t n) {
    if (n == 0)
        return false;
    if (*ptr > x)
        return true;
    return hasLargerThan(++ptr, x, --n);
}

bool contains(int *ptr, int x, size_t n) {
    while (n--) 
        if (*ptr++ == x)
            return true;
    return false;
}

bool notContainsAny(int *ptr, size_t n, int *src, size_t src_n) {
    while (n--)
        if (contains(src, *ptr++, src_n))
            return false;
    return true;
}


int main() {
    int a[] = {1, 0, -5, 2, 9};
    int b[] = {-1, 0, -5, -2, -9};
    printf("%s\n", anyPositive(a, 5) ? "true" : "false");
    printf("%s\n", anyPositive(b, 5) ? "true" : "false");
    printf("%s\n", hasLargerThan(a, 0, 5) ? "true" : "false");
    printf("%s\n", hasLargerThan(b, 0, 5) ? "true" : "false");
    printf("%s\n", notContainsAny(a, 5, b, 5) ? "true" : "false");
    return 0;
}
