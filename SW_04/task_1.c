// Вывести кубы чисел находящихся между двумя введенными числами.
// Вводится большее, затем меньшее число.

#include "stdio.h"

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    for (int i = a; i >= b; i--)
    {
        printf("%d\n", i*i*i);
    }
    return 0;
}