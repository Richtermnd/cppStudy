#include <cstdio>

void inputArray(int *a) {
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int a[10];
    inputArray(a);
    printf("%d\n", a[1]);
    printf("%d\n", a[8]);
    for (int i = 1; i < 10; i += 2)
        printf("%d\n", a[i]);

    int s;
    for (int x: a)
        s += x;
    printf("%f\n", (float)s / 10.f);

    int b[] {-2, 4, 3, -7, 0, 12, 9, -2, 4, 2};
    for (int i = 0; i < 10; ++i)
        printf("%d\n", a[i] + b[i]);
    return 0;
}
