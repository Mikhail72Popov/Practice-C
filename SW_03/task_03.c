// Ввести три числа и найти наибольшее из них(длинный способ)

#include <stdio.h>

int main(int argc, char **argv)
{
    int a,b,c,max;
    scanf("%d%d%d",&a,&b,&c);
    if(a > b)
    max = a;
    else
    max = b;
    if(max < c)
    max = c;
    printf("%d",max);
    printf("/n");
    return 0;
}

// Найти наибольшее из трех чисел (короткий путь)

// int main(int argc, char **argv)
// {
//     int a,b,c;
//     scanf("%d%d%d",&a,&b,&c);
//     int max =
//     a > b ?
//     a : b;//всего две строки кода!
//     max = max < c ? max : c;//вместо 6!!!
//     printf("%d",max);
//     return 0;
// }

