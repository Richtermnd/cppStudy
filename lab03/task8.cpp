#include <cstdio>
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%c", (j + i % 2) % 2 ? 'o' : 'x');
        printf("\n");
    }
    return 0;
}
