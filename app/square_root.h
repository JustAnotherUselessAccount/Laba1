#include <stdio.h>
#include <math.h>

int get_roots(double a, double b, double c, double* x1, double* x2) {
    if (a == 0 && b == 0) {
        return 1;       // Ошибка - ошибочное выражение
    }
    if (a == 0) {
        *x1 = -c/b;
        *x2 = -c/b;
        return 0;       // Возврат - один корень
    }
    double D = b*b - 4 * a * c;
    if (D < 0) {
        return 1;       // Ошибка - нет корней
    } else {
        *x1 = (-b + sqrt(D)) / (2 * a);
        *x2 = (-b - sqrt(D)) / (2 * a);
        return 0;
    }
}
