#include <cstdio>


bool isStartWith100(int x) {
    while (x > 999)
        x /= 10;
    return x == 100;
}

int main() {
    int n, x;
    scanf("%d", &n);
    int a_s = 0, a_cnt = 0;
    int b = 0;
    int c = 0;
    do {
        scanf("%d", &x);
        if (isStartWith100(x)) {
            a_s += x;
            a_cnt++;
        }
        if (x % 7 == 0)
            b++;
        if (x % 100 == 11)
            c += x;
    } while(--n);
    printf("a) %f\n", (float)a_s / (float)a_cnt);
    printf("b) %d\n", b);
    printf("c) %d\n", c);
    return 0;
}
