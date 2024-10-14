#include <cstdio>

void reverseInput() {
    int d;
    scanf("%d", &d);
    if (d != 0) {
        reverseInput();
        printf("%d\n", d);
    }
}

int main() {
    reverseInput();
    return 0;
}
