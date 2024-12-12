#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>


// ������� ��� ���������� ������
double calculate_expression(double a, double b, double x) {
    // ���������� ���������� �� ����������
    double numerator = x * pow(cos(a - x), 2); // ���������
    double denominator = b * x + 1;           // ���������
    return numerator / denominator;
}

int main() {
    setlocale(LC_ALL, "RU");
    // ��������� �������� ��� ��������
    double standard_a = 7.23;
    double standard_b = 4.18;
    double standard_x = 6.27;

    // ��������� ��� ����������� �������
    double result_standard = calculate_expression(standard_a, standard_b, standard_x);
    printf("��������� ��� a=%.2f, b=%.2f, x=%.2f: %.6f\n", standard_a, standard_b, standard_x, result_standard);

    // ������������ �����: �������� ����� ������������
    double user_a, user_b, user_x;
    printf("������� �������� a: ");
    if (scanf("%lf", &user_a) != 1) {
        printf("������: ������� �������� �������� ��� a.\n");
        return 1;
    }
    printf("������� �������� b: ");
    if (scanf("%lf", &user_b) != 1) {
        printf("������: ������� �������� �������� ��� b.\n");
        return 1;
    }
    printf("������� �������� x: ");
    if (scanf("%lf", &user_x) != 1) {
        printf("������: ������� �������� �������� ��� x.\n");
        return 1;
    }

    // ��������� ��� �������� ������������ �������
    double result_user = calculate_expression(user_a, user_b, user_x);
    printf("��������� ��� a=%.2f, b=%.2f, x=%.2f: %.6f\n", user_a, user_b, user_x, result_user);

    return 0;
}