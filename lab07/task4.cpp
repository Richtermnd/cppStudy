#include <cstdio>

void a() {
    printf("****\n****\n****\n****\n"); // KISS
}

void b(int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            printf("*");
        printf("\n");
    }
}

void c(int n, int m) {
    char *indent = new char[m]{};
    for (int i = 0; i < m; ++i)
        indent[i] = ' ';
    for (int i = 0; i < n; ++i) {
        printf("%s", indent);
        for (int j = 0; j < n; ++j)
            printf("*");
        printf("\n");
    }
}

void d(int n, int m) {
    const char WHITE = ' ';
    const char BLACK = '#';
    int y, x;
    for (int i = 0; i < n*m; ++i) { // row by row
        y = i / m; // y coordinate of desk
        for (int j = 0; j < n*m; ++j) { // col by col
            x = j / m; // x coordinate of desk
            printf("%c", (x + y % 2) % 2 ? WHITE : BLACK);
        }
        printf("\n");
    }
}

int main() {
    d(8, 4);
    return 0;
}
