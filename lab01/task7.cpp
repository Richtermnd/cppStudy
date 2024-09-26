#include <cstdio>
int main() {
    int a, b;
    printf("Two integers separeted by space\n");
    scanf("%d %d", &a, &b);
    printf("%d\n", a % 10 + b % 10);
    return 0;
}
