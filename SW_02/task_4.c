#include <stdio.h>
int main(void)
{
    int a, b, c;
    float average;
    printf("Введите числа через пробел: \n");
    scanf("%d%d%d", &a, &b, &c); //без пробелов
    average = a + b + c;
    average /= 3.f;//точка обязательна - это вещественный литерал, показать что будет average = (a + b + c) / 3;
    printf("Результат = %.2f\n", average);
    return 0;
}