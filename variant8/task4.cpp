#include <cstdio>
#include <cmath>


int main() {
    float x;
    scanf("%f", &x);
    if (x > 2.5f)
        printf("%f\n", sqrt(2*x + 1));
    else if (x < -2.5f)
        printf("%f\n", sin(M_PI*std::abs(x))/(x - 3));
    else
        printf("%f\n", 0.5f*pow(x, 4));
    
    return 0;
}
