/* Составить функцию (Алгоритм Евклида), которая определяет наибольший общий делитель двух
натуральных и привести пример ее использования
int nod(int a, int b)
Данные на входе:Два целых положительных числа
Данные на выходе:Одно целое число - наибольший общий делитель (нод).

Пример No1
Данные на входе:14 21
Данные на выходе:7
 */

#include <stdio.h>

int nod(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

int main(void)
{
    int a, b;
    printf("Введите два числа через пробел: \n");
    scanf("%d%d", &a, &b); 
    printf("%d /n", nod(a, b));
}