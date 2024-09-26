#include <cfloat>
#include <cstdio>

int main() {
    int n;
    scanf("%d", &n);
    double *a = new double[n]{};
    double *ptr = a;
    for (int i = n; i--; )
        scanf("%lf", ptr++);

    double mn1 = DBL_MAX, mn2 = DBL_MAX, s;
    ptr = a;
    for (int i = n; i--; ptr++) {
        if (*ptr > 0)
            s += *ptr;
        if (*ptr < mn1) {
            mn2 = mn1;
            mn1 = *ptr;
        } else if (*ptr < mn2)
            mn2 = *ptr;
    }
    printf("%f\n", mn2);
    return 0;
}
