#include <cstdio>
#include <ctime>

// ref: man ctime

int main() {
    // Getting current date
    time_t curTime;
    time(&curTime);
    struct tm *today = localtime(&curTime);

    int d, m, y;
    printf("Введите дату рождения в формате dd.mm.yyyy\n");
    scanf("%d.%d.%d", &d, &m, &y);
    if (today->tm_mday < d)
        m--;
    if (today->tm_mon + 1 < m)
        y++;
    printf("%d\n", today->tm_year - y + 1900);

    return 0;
}
