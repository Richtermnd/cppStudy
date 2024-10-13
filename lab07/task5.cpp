#include <cstdio>

unsigned int fact(int x) {
    int res = 1;
    for (;x != 1; --x) {
        res *= x;
    }
    return res;
}

int pow(int x, int n) {
    int res = 1;
    while (n--) {
        res*=x;
    }
    return res;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    printf("a - %u\n", fact(n)*fact(m) / fact(n+m));
    printf("b - Max signed int: %d\n", pow(2, sizeof(int)*8-1) - 1);
    return 0;
}
