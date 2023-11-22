#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>

double euclideanDistance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2;

    printf("Введіть координати першої точки (x1 y1): ");
    scanf_s("%lf %lf", &x1, &y1);

    printf("Введіть координати другої точки (x2 y2): ");
    scanf_s("%lf %lf", &x2, &y2);

    double distance = euclideanDistance(x1, y1, x2, y2);
    printf("Евклідова відстань між точками: %lf\n", distance);

    return 0;
}
