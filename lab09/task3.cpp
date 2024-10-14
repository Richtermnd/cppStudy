#include <climits>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#define RANDOM_LIMIT 100

int** matrix(int n, int m) {
    int **res = new int*[n]{};
    for (int i = 0; i < n; ++i)
        res[i] = new int[m]{};
    return res;
}

void fillRandom(int **m, size_t rows, size_t cols) {
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            m[i][j] = rand() % RANDOM_LIMIT;
}

void printMatrix(int **a, size_t rows, size_t cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j)
            printf("%3d ", a[i][j]);
        printf("\n");
    }
}

void printRow(int *ptr, size_t n) {
    while (n--)
        printf("%3d ", *ptr++);
    printf("\n");
}

void rowsSum(int *dst, int **src, size_t rows, size_t cols) {
    int s;
    for (int i = 0; i < rows; ++i) {
        s = 0;
        for (int j = 0; j < cols; ++j)
            s += src[i][j];
        *dst++ = s;
    }
}

int *colsMin(int **m, size_t rows, size_t cols) {
    int *res = new int[cols];
    for (int i = 0; i < cols; ++i)
        res[i] = INT_MAX;

    for (int j = 0; j < cols; ++j)
        for (int i = 0; i < rows; ++i)
            res[j] = m[i][j] < res[j] ? m[i][j] : res[j];
    return res;
}

int **matrixMul(
        int **a, size_t a_rows, size_t a_cols,
        int **b, size_t b_rows, size_t b_cols
) {
    int **res = matrix(b_rows, a_cols);
    int s;
    for (int y = 0; y < a_rows; ++y) {
        for (int x = 0; x < b_cols; ++x) {
            s = 0;
            for (int i = 0; i < a_cols; ++i) {
                int temp = a[y][i] * b[i][x];
                s += temp;
            }
            res[y][x] = s;
        }
    }
    return res;
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
int main() {
    srand(time(NULL));
    int **m = matrix(3, 4);
    fillRandom(m, 3, 4);
    printMatrix(m, 3, 4);
    int *s = new int[3];
    rowsSum(s, m, 3, 4);
    printRow(s, 3);
    printRow(colsMin(m, 3, 4), 4);

    int **a = matrix(3, 3);
    printf("Input matrix A(3, 3):\n");
    readMatrix(a, 3, 3);
    printf("Matrix A:\n");
    printMatrix(a, 3, 3);
    int **b = matrix(3, 2);
    printf("Input matrix B(3, 2):\n");
    readMatrix(b, 3, 2);
    printf("Matrix B:\n");
    printMatrix(b, 3, 2);
    printf("A*B:\n");
    printMatrix(matrixMul(a, 3, 3, b, 3, 2), 3, 2);
    return 0;
}
