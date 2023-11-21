#include <stdio.h>
// Ввести два числа и найти их разность
// Нужно напечатать разность двух чисел

int main(void)
{
    int a, b;
    float diff;

    printf("Введите два числа через пробел: \n");
    scanf("%d%d", &a, &b); 

    diff = a - b;
    printf("Результат: %d - %d = %.2f\n", a,b,diff);
    return 0;
}