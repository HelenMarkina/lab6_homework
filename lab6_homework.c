#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int N;

    printf("ПРОГРАММА ПРОВЕРКИ ПРОИЗВЕДЕНИЯ ЦИФР ЧИСЛА\n");
    printf("==========================================\n\n");

    printf("Введите число N (N < 1000): ");
    scanf("%d", &N);

    // Разложение числа на цифры
    int digit1, digit2, digit3;
    int product;

    if (N < 10) {
        // Однозначное число
        digit1 = N;
        product = digit1;
        printf("\nЧисло: %d (однозначное)\n", N);
        printf("Цифры: %d\n", digit1);
    }
    else if (N < 100) {
        // Двузначное число
        digit1 = N / 10;
        digit2 = N % 10;
        product = digit1 * digit2;
        printf("\nЧисло: %d (двузначное)\n", N);
        printf("Цифры: %d, %d\n", digit1, digit2);
    }
    else {
        // Трехзначное число
        digit1 = N / 100;
        digit2 = (N / 10) % 10;
        digit3 = N % 10;
        product = digit1 * digit2 * digit3;
        printf("\nЧисло: %d (трехзначное)\n", N);
        printf("Цифры: %d, %d, %d\n", digit1, digit2, digit3);
    }

    printf("Произведение цифр: %d\n", product);

    // Проверка является ли произведение трехзначным числом
    int is_three_digit = (product >= 100 && product <= 999);

    printf("\nРЕЗУЛЬТАТ ПРОВЕРКИ:\n");
    printf("===================\n");
    printf("Произведение цифр %d %s трехзначным числом\n",
        product, is_three_digit ? "является" : "не является");

    if (is_three_digit) {
        printf("Условие выполнено\n");
    }
    else {
        printf("Условие не выполнено\n");
    }

    return 0;
}
