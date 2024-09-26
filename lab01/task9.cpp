#include <cstdio>
int main() {
    int secs, mins, hours;
    scanf("%d", &secs);
    hours = secs / 60 / 60;
    mins = secs / 60;
    secs %= 60;
    hours += mins / 60;
    hours %= 24;
    mins %= 60;
    printf("%02d:%02d:%02d\n", hours, mins, secs);
    return 0;
}
