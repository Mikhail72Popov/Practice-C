#include <stdio.h>

// На вход подается произвольное четырехзначное число
// Нужно напечатать среднее арифметическое цифр

int main(void)
{
    int x;
    printf("Введите четырехзначное число: \n");
    scanf("%d", &x);
    float res = ((x / 1000) + ((x % 1000) / 100) + (x % 100 / 10) + (x % 10))/4.f;
    printf("Результат = %.2f\n", res);
    return 0;
}