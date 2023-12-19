/* Дано натуральное число N. Посчитать количество «1» в двоичной записи числа.
Данные на входе:Натуральное число
Данные на выходе:Целое число - количество единиц в двоичной записи числа.

Пример No1
Данные на входе:5
Данные на выходе:2

Пример No2
Данные на входе:255
Данные на выходе:8
 */


#include <stdio.h>

void print_1n(int n, int i)
{
    if (n >= 2)
        print_1n(n / 2, i);
    if (n % 2==1 || n==1)
    {    
        i = i + 1;
        printf("%d", i);
    }
    return;
}


int main()
{
    int n, i=0;
    printf("Введите число: \n");
    scanf("%d",&n);
    print_1n(n, i);
    return 0;
}