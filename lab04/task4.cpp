#include <cstdio>

void inputArray(int *a);

int main() {
    int a[10], w;
    printf("Array separated with newline:\n");
    inputArray(a);
    printf("w: ");
    scanf("%d", &w);
    for (int i = 0; i < 10; ++i)
        for (int j = i + 1; j < 10; ++j)
            if (a[i] + a[j] == w)
                printf("%d %d\n%d %d\n\n", a[i], a[j], i, j);
    return 0;
}

void inputArray(int *a) {
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &a[i]);
    }
}
