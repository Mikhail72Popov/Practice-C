/* Описать функцию вычисления f(x) по формуле:
f(x)= x*x при -2 <= x < 2;
x*x+4x+5 при x >= 2;
4 при x < -2.
Используя эту функцию для n заданных чисел, вычислить f(x). Среди вычисленных значений найти
наибольшее.
Данные на входе:Последовательность ненулевых целых чисел, в конце последовательности число 0.

Данные на выходе:Одно целое число

Пример No1
Данные на входе:8 3 -3 10 0
Данные на выходе:145
Пример No2
Данные на входе:-2 -1 -3 1 0
Данные на выходе:4
 */

#include <stdio.h>
int f(int x)
{
    if ((x >= -2) && (x < 2))
        return x * x;
    if (x >= 2)
        return x*x+4*x+5;
    if (x < -2)
    return 4;
}

int main(void)
{
    int a=1, b, max = 0;
    while (a != 0)
    {
        scanf("%d", &a);
        b = f(a);
        if (b > max)
        max = b;
    }
    printf("%d ", max);
    return 0;
}

