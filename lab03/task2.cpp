#include <algorithm>
#include <climits>
#include <cmath>
#include <cstdio>

int main() {
    int cur;
    int negs, twoDigitsSum, mn;
    mn = INT_MAX;

    int cnt = 7;
    while (cnt--) {
        scanf("%d", &cur);
        if (cur < 0)
            negs++;
        if (cur > 9 && cur < 100)
            twoDigitsSum += cur;
        mn = std::min(mn, cur);
    }
    printf("a - %d\n", negs);
    printf("b - %d\n", twoDigitsSum);
    printf("c - %d\n", mn);
    return 0;
}
