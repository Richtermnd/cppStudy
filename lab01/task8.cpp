#include <cstdio>
#include <cstdlib>
int main() {
    int a;
    scanf("%d", &a);
    if (a < 1000 || a > 9999) {
        printf("number must be a 4 digit.");
        exit(1);
    }
    printf("%d %d\n", a / 1000, a % 10);
    return 0;
}
