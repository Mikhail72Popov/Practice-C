/* Написать функцию, которая возвращает среднее арифметическое двух переданных ей
аргументов (параметров).
int middle(int a, int b)
Данные на входе:Два целых не отрицательных числа
Данные на выходе:Одно целое число

Пример No1
Данные на входе:5 7
Данные на выходе:6

Пример No2
Данные на входе:10 20
Данные на выходе:15 */

#include <stdio.h>

int middle (int a, int b)
{
    int res = 0;
    res = (a + b) / 2;
    return res;
}

int main ()
{
    int a, b;
    scanf("%d%d", &a,&b);
    printf("%d  /n", middle(a,b));
    return 0;
}
