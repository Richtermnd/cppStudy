#include <cstdio>

int** matrix(int n, int m) {
    int **res = new int*[n]{};
    for (int i = 0; i < n; ++i)
        res[i] = new int[m]{};
    return res;
}

int main() {
    int n;
    scanf("%d", &n);
    int **m = matrix(n, n);
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            printf("m[%d][%d]: ", i, j);
            scanf("%d", &m[i][j]);
        }
    int *a = new int[n]{};
    int cnt;
    for (int j = 0; j < n; ++j) {
        cnt = 0;
        for (int i = 0; i < n; ++i)
            cnt += m[i][j] == 0;
        printf("%d ", cnt);
    }
    printf("\n\n");

    int b = 1;
    for (int i = 0; i < n; ++i)
        b *= m[i][n - i - 1];
    printf("%d\n\n", b);

    int c;
    for (int i = 0; i < n; ++i) {
        for (int j = i+1; j < n; ++j)
            c += m[i][j] > 0;
    }
    printf("%d\n", c);
    return 0;
}
