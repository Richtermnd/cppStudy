#include <cstdio>

void printRow(int *ptr, size_t n) {
    while (n--)
        printf("%3d ", *ptr++);
    printf("\n");
}

int *min(int *ptr, size_t n) {
    if (n == 1)
        return ptr;
    int *a = ptr;
    int *b = min(++ptr, --n);
    return *a < *b ? a : b;
}

void sort(int *ptr, size_t n) {
    if (n == 1)
        return;
    int *mn = min(ptr, n);
    int temp = *mn;
    *mn = *ptr;
    *ptr = temp;
    sort(ptr + 1, n - 1);
}

int main() {
    int a[] = {2, 1, 3, 5, 4};
    sort(a, 5);
    printRow(a, 5);
    return 0;
}
