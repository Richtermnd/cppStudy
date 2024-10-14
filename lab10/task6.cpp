#include <cstdio>

int mul(int a, int b) {
    if (b == 1)
        return a;
    return a + mul(a, --b);
}

int main() {
    printf("%d\n", mul(2, 3));
    printf("%d\n", mul(4, 1));
    printf("%d\n", mul(8, 8));
    return 0;
}
