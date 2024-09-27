#include <cfloat>
#include <cstdio>

float min(float *a, int n) {
    float mn = FLT_MAX;
    for (;n--; a++)
        mn = *a < mn ? *a : mn;
    return mn;
}

int main () {
    int n;
    scanf("%d", &n);
    float *days[7]; // I hope it array of pointers to float, not pointer to array of floats, xd.
    for (int i = 0; i < n; ++i) {
        days[i] = new float[n]{};
    }
    for (int i = 0; i < 7; ++i) {
        printf("day %d\n", i + 1);
        for (int j = 0; j < n; ++j){
            printf("\t1: ");
            scanf("%f", &days[i][j]);
        }
    }
    printf("Day 1 min: %f\n", min(days[0], n));
    
    int cnt;
    for (int i = 0; i < n*2; ++i) {
        cnt += days[5 + i / 2][i%n] < 0;
    }
    printf("Negative at weekends: %d\n", cnt);

    int maxDay;
    float mx;
    for (int day = 0; day < 7; ++day)
        for (int i = 0; i < n; ++i)
            if (days[day][i] > mx) {
                maxDay = day+1;
                mx = days[day][i];
            }
    printf("Max temperature %f was at day %d\n", mx, maxDay);

    float s;
    for (int i = 0; i < 7; ++i)
        s += *days[i];
    printf("Average by first measure: %f\n", s / 7.f);
    return 0;
}
