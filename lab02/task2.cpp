
#include <cstdio>
int main() {
    int a;
    scanf("%d", a);
    printf("%s\n", a == 0 ? "Нуль" : a > 0 ? "Положительное" : "Отрицательное.");
    printf("%s\n", a % 2 ? "Нечетное" : "Четное");
    return 0;
}
