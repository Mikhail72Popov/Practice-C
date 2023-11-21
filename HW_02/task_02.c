#include <stdio.h>
// Ввести три числа, найти их сумму и произведение
// Нужно напечатать сумму и произведение трех чисел

int main(void)
{
    int a, b, c;
    float sum, prod;

    printf("Введите три числа через пробел: \n");
    scanf("%d%d%d", &a, &b, &c); 

    sum = a + b + c;
    prod = a * b * c;
    printf("Сумма:        %d+%d+%d=%.2f\n", a,b,c,sum);
    printf("Произведение: %d*%d*%d=%.2f\n", a,b,c,prod);
    return 0;
}