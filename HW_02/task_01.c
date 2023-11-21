#include <stdio.h>
// Ввести три числа, найти их сумму
// Нужно напечатать сумму трех чисел

int main(void)
{
    int a, b, c;
    float sum;

    printf("Введите три числа через пробел: \n");
    scanf("%d%d%d", &a, &b, &c); 

    sum = a + b + c;
    printf("Результат:%d+%d+%d=%.2f\n", a,b,c,sum);
    return 0;
}