#include <cstdio>
#include <cstdlib>

int main() {
    double a, b, res;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+':
            res = a + b;
            break;
        case '-':
            res = a - b;
            break;
        case '*':
            res = a * b;
            break;
        default:
            exit(1);
    }
    printf("%f\n", res);
    return 0;
}

