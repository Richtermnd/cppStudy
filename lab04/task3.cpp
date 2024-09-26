#include <cstdio>
#include <cstdlib>
#include <ctime>


void printArray(int a[], int n) {
    for (int i = 0; i < n; ++i) {
        printf("%2d ", a[i]);
    }
    printf("\n");
}

int main() {
    srand(time(NULL));
    const int n = 7;
    int x[n], y[n];
    int a[3*n];
    for (int i = 0; i < n; ++i) {
        x[i] = rand() % 19;
        y[i] = rand() % 19;
    }
    printf("x: ");
    printArray(x, n);
    printf("y: ");
    printArray(y, n);
    printf("\n");
    for (int i = 0; i < 3*n; ++i) {
        switch (i % 3) {
            case 0:
                a[i] = x[i / 3];
                break;
            case 1:
                a[i] = y[i / 3];
                break;
            case 2:
                a[i] = x[i / 3] + y[i / 3];
                break;
        }
    }

    int b[2*n];
    for (int i = 0; i < 2*n; ++i) {
        switch (i % 2) {
            case 0:
                b[i] = x[n - (i / 2 + 1)];
                break;
            case 1:
                b[i] = y[i / 2] + x[i / 2 + 1];
                break;
        
        }
    }
    printf("a: ");
    printArray(a, 3*n);
    printf("b: ");
    printArray(b, 2*n);
    return 0;
}
