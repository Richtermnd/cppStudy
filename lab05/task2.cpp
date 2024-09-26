#include <climits>
#include <cstdio>

#define swap(x, y) {\
    typeof(x) t = x;\
    x = y;\
    y = t;\
}

void printArray(int a[3][4]) {
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j)
            printf("%2d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int m[3][4];
    for (int i = 0; i < 3; ++i)
        scanf("%d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3]);

    int a, ai, aj;
    a = INT_MAX;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j) {
            if (m[i][j] < a) {
                a = m[i][j];
                ai = i;
                aj = j;
            }
        }
    printf("a - %d %d %d\n\n", a, ai, aj);

    for (int i = 0; i < 3; ++i) {
        swap(m[i][3], m[i][aj])
    }
    printf("b -\n");
    printArray(m);

    int x[4];
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            x[j] += m[i][j] * (m[i][j] > 0);
    printf("c - ");
    for (int k:x)
        printf("%d ", k);
    printf("\n");

    int mn = INT_MAX;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            mn = m[i][j] < mn ? m[i][j] : mn;
    for (int i = 0; i < 4; ++i)
        m[0][i] = mn;
    printf("d -\n");
    printArray(m);

    return 0;
}
