#include <cstdio>

bool isLucky(int a) {
    int head, tail;
    head = a / 100000 + a / 10000 % 10 + a / 1000 % 10;
    tail = a / 100 % 10 + a / 10 % 10 + a % 10;
    return head == tail;
}

int main() {
    printf("%s\n", isLucky(151205) ? "yes" : "no");
    return 0;
}
