#include <cstdio>

#define printArray(a, n, m) {\
    for (int i = 0; i < n; ++i) {\
        for (int j = 0; j < m; ++j)\
            printf("%d ", a[i][j]);\
        printf("\n");\
    }\
    printf("\n");\
}

int main() {
    int a[5][5] = {};
    for (int i = 0; i < 5; ++i)
        a[i][i] = 1;
    printArray(a, 5, 5);

    int b[6][6] = {};
    for (int j = 0; j < 6; ++j) {
        for (int i = j; i >= 0; --i) {
            b[i][j] = 6 + i - j;
        }
    }
    printArray(b, 6, 6);

    int c[5][5] = {};
    for (int i = 4; i >= 0; --i) {
        for (int j = 4 - i; j < 5; ++j) {
            c[i][j] = j + 1 - 4 + i; // wtf?
        }
    }
    printArray(c, 5, 5);

    int d[8][8] = {}; 
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++)
             d[i][j] = (j + i % 2) % 2 ? 1 : 0;
    }
    printArray(d, 8, 8);

    int e[10][10] = {};
    int cur_digit;
    int i1, i2, j1, j2;
    for (int step = 0; step < 5; ++step) {
        cur_digit = 4 - step;
        i1 = step;
        i2 = 10 - step;
        j1 = step;
        j2 = 10 - step;
        for (int i = i1; i < i2; ++i)
            for (int j = j1; j < j2; ++j)
                e[i][j] = cur_digit;
    }
    printArray(e, 10, 10);
    return 0;
}
