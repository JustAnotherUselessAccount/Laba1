#include <stdio.h>

#include "square_root.h"

int main() {
    printf("Hello World!\n");
    double a = 0, b = 0, c = 0;
    scanf("%lf %lf %lf", a, b, c);
    double x1 = 0, x2 = 0;
    int res = get_roots(a, b, c, &x1, &x2);
    if (res) {
        printf("Ошибка - корней не существует");
    } else {
        printf("Полученные корни: %g и %g", x1, x2);
    }
}
