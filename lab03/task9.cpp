#include <cstdio>
int main() {
    int n;
    int cnt, mx;
    for (scanf("%d", &n); n != 0; scanf("%d", &n)) {
        if (n > mx) {
            mx = n;
            cnt = 1;
        } else if (n == mx) {
            cnt++;
        }
    }
    printf("%d\n", cnt);
    return 0;
}

