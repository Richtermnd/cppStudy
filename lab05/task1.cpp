#include <cstdio>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(NULL));
    int a[2][3];

    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < 3; ++j)
            a[i][j] = rand() % 30;
    int s, s2, prod = 1;
    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            s += a[i][j];
            s2 += a[i][j] >= 2 && a[i][j] <= 9 ? a[i][j] : 0;
            prod *= a[i][j] >= 2 && a[i][j] <= 9 ? a[i][j] : 1;
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("%s\n", s % 2 == 0 ? "Сумма является четным числом." : "Сумма не является четным числом.");
    printf("%d\n", s2);
    printf("%d\n", prod);

    return 0;
}
