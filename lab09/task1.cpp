#include <climits>
#include <cstdio>


void inputArray(int *ptr, size_t n) {
    while (n--)
        scanf("%d", ptr++);
}

void printArray(int *ptr, size_t n) {
    while (n--)
        printf("%d ", *ptr++);
    printf("\n");
}

void dot(int *a, int *b, size_t n) {
    int res = 0;
    while (n--)
        res += *a++ * *b++;
    printf("%d\n", res);
}

void sum(int *res, int *a, int *b, size_t n) {
    while (n--)
        *res++ = *a++ + *b++;
}

int *mul(int scalar, int *ptr, size_t n) {
    int *res = new int[n];
    int *res_ptr = res;
    while (n--)
        *res_ptr++ = *ptr++ * scalar;
    return res;

}

int find(int target, int *ptr, int n) {
    int closest = INT_MAX;
    for (int *x = ptr; x - ptr < n; x++) {
        if (*x == target) {
            return *x;
        }
        if (*x > target && *x < closest) 
            closest = *x;
    }
    return closest;
}

int main() {
    int a[3];
    int b[3];
    inputArray(a, 3);
    printArray(a, 3);
    inputArray(b, 3);
    printArray(b, 3);
    dot(a, b, 3);

    int s[3];
    sum(s, a, b, 3);
    printArray(s, 3);

    printArray(mul(3, a, 3), 3);
    printf("%d\n", find(1, a, 3));
    printf("%d\n", find(0, b, 3));
    return 0;
}
