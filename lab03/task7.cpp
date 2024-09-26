#include <cmath>
#include <cstdio>


int main() {
    int x0, y0; // Координаты начальной точки, чтобы не замыкать фигуру.
    int x1, y1; // Предыдущая точка
    int x2, y2; // Текущая точка
    int dx, dy; // Вектор между предыдущей и текущей точкой
    
    int n;
    double res;
    scanf("%d", &n);
    scanf("%d %d\n", &x0, &y0);

    // Запоминаем предыдущую точку.
    x1 = x0;
    y1 = y0;
    for (int i = 0; i < n-1; i++) {
        scanf("%d %d", &x2, &y2);
        // Рассчитываем расстояние
        dx = x2 - x1;
        dy = y2 - y1;
        res += sqrt(dx*dx + dy*dy);
        // Перезаписываем предыдущую точку
        x1 = x2;
        y1 = y2;
    }
    // Замыкаем фигуру.
    dx = x2 - x0;
    dy = y2 - y0;
    res += sqrt(dx*dx + dy*dy);
    printf("%lf\n", res);
    return 0;
}
