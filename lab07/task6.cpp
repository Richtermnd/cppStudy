#include <cstdio>
#include <cstdlib>

char sign(int x) {
    return x == 0 ? ' ' : x > 0 ? '+' : '-';
}

void printDigitRepr(int x) {
    const char *reprs[] = {
        "ноль",
        "один",
        "два",
        "три",
        "четыре",
        "пять",
        "шесть",
        "семь",
        "восемь",
        "девять",
        "десять",
    };
    printf("%s\n", reprs[abs(x)]);
} 

int main() {
    int n;
    scanf("%d", &n);
    printf("%c", sign(n));
    printDigitRepr(n);
    return 0;
}
