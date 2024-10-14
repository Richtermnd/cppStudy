#include <cstdio>

void printN(int from, int to) {
    if (from > to) {
        return;
    }
    printf("%d\n", from);
    printN(++from, to);
}

int main() {
    printN(1, 10);
    return 0;
}
