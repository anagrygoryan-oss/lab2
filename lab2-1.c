#include <stdio.h>

int main() {
    int number1, number2;
    int sum_sq, twice_prod, diff;

    printf("Введи перше число: ");
    scanf("%d", &number1);
    printf("Введіть друге число:");
    scanf("%d", &number2);
    // Обчислення
    sum_sq = (number1 * number1) + (number2 * number2);
    twice_prod = 2 * number1 * number2;
    diff = number1 - (3 * number2);

    // Виведення результатів
    printf("\nРезультати:\n");
    printf("Сума квадратів: %d\n", sum_sq);
    printf("Подвоєний добуток: %d\n", twice_prod);
    printf("Різниця: %d\n", diff);

    return 0;
}