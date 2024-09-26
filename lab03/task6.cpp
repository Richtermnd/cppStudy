#include <cstdio>

int main() {
    int x;
    int cnt, evens;
    while (scanf("%d", &x) != EOF) {
        cnt++;
        evens += ~x & 0x1;
    }
    printf("%d\n", cnt);
    printf("%d\n", evens);
    return 0;
}
