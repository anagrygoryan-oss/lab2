#include <stdio.h>
#include <math.h> // Потрібна для функції sqrt (корінь)

int main() {
    // Оголошуємо змінні
    int x, y, z;
    float a;

    // Виводимо текст і зчитуємо значення з клавіатури
    printf("Введіть x: ");
    scanf("%d", &x);

    printf("Введіть y: ");
    scanf("%d", &y);

    printf("Введіть z: ");
    scanf("%d", &z);

    // a = sqrt(x^2 * y - 14z)
    // x * x — це x у квадраті
    a = sqrt(pow(x, 2) * (y) - (14 * z));

    // Виведення результату
    printf("\nВведені значення: x=%.1d, y=%.1d, z=%.1d\n", x, y, z);
    printf("Результат a = %.2f\n", a);

    return 0;
}