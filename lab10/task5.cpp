#include <cstdio>

// segfault on negative b, xd.
int sum(int a, int b) {
    if (b == 0) {
        return a;
    }
    return sum(++a, --b);
}

int main() {
    printf("%d\n", sum(2, 3));
    printf("%d\n", sum(4, 3));
    return 0;
}
