#include <cstdio>
int main() {
    int n;
    float s;
    scanf("%d", &n);
    do 
        s += 1.f/ (float)(2*n);
    while (--n);
    printf("%f\n", s);
    return 0;
}
