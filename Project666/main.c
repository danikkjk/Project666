#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>


// Функція для обчислення виразу
double calculate_expression(double a, double b, double x) {
    // Обчислення чисельника та знаменника
    double numerator = x * pow(cos(a - x), 2); // чисельник
    double denominator = b * x + 1;           // знаменник
    return numerator / denominator;
}

int main() {
    setlocale(LC_ALL, "RU");
    // Стандартні значення для перевірки
    double standard_a = 7.23;
    double standard_b = 4.18;
    double standard_x = 6.27;

    // Результат для стандартних значень
    double result_standard = calculate_expression(standard_a, standard_b, standard_x);
    printf("Результат для a=%.2f, b=%.2f, x=%.2f: %.6f\n", standard_a, standard_b, standard_x, result_standard);

    // Модифікована версія: введення даних користувачем
    double user_a, user_b, user_x;
    printf("Введите значение a: ");
    if (scanf("%lf", &user_a) != 1) {
        printf("Ошибка: введиту числовое значение для a.\n");
        return 1;
    }
    printf("Введите значение b: ");
    if (scanf("%lf", &user_b) != 1) {
        printf("Ошибка: введиту числовое значение для b.\n");
        return 1;
    }
    printf("Введите значение x: ");
    if (scanf("%lf", &user_x) != 1) {
        printf("Ошибка: введиту числовое значение для x.\n");
        return 1;
    }

    // Результат для введених користувачем значень
    double result_user = calculate_expression(user_a, user_b, user_x);
    printf("Результат для a=%.2f, b=%.2f, x=%.2f: %.6f\n", user_a, user_b, user_x, result_user);

    return 0;
}