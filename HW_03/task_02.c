// Ввести пять чисел и вывести наименьшее из них
// Нужно напечатать наименьшее число
// Данные на входе: Пять целых чисел разделенных пробелом
// Данные на выходе: Одно целое число
// Данные на входе: 4 15 9 56 4
// Данные на выходе: 4

#include <stdio.h>

int main(void)
{
    int a,b,c,f,e,min;
    printf("Введите пять чисел через пробел: \n");
    scanf("%d%d%d%d%d", &a,&b,&c,&f,&e);
    min = a < b ? a : b;
    min = min < c ? min : c;
    min = min < f ? min : f;
    min = min < e ? min : e;
    printf ("%d", min);
    return 0;
}
