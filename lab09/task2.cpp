#include <cstdio>
#include <cstdlib>

// Я не увидел уточнение насчёт автоматического двумерного массива...
// Надеюсь мой труд не пропадёт зря...

int** matrix(int n, int m) {
    int **res = new int*[n];
    for (int i = 0; i < n; ++i)
        res[i] = new int[m]{};
    return res;
}

void printMatrix(int **a, size_t rows, size_t cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            /* printf("%d %d\n", i, j); */
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

void readRow(int *ptr, size_t cols) {
    char c;
    char buf[20];
    char *bufPtr = buf;
    while (cols--) {
        while ((c = getchar()) != ' ' && c != '\n' && c != EOF) {
            *bufPtr++ = c;
        }
        *bufPtr = '\0';
        *ptr++ = atoi(buf);
        bufPtr = buf;
    }
}

void readMatrix(int **ptr, size_t rows, size_t cols) {
    for (int i = 0; i < rows; ++i) {
        readRow(ptr[i], cols);
    }
}

void sqMatrix(int **res, int **src, size_t rows, size_t cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            res[i][j] = src[i][j]*src[i][j];
}

int main() {
    const int rows = 3;
    const int cols = 4;
    int **a = matrix(rows, cols);
    readMatrix(a, rows, cols);
    printMatrix(a, rows, cols);
    sqMatrix(a, a, rows, cols);
    printMatrix(a, rows, cols);
    return 0;
}

