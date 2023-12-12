/* Составить логическую функцию, которая определяет, верно ли, что в заданном
числе сумма цифр равна произведению.
int is_happy_number(int n)
Данные на входе:Целое не отрицательное число
Данные на выходе:YES или NO

Пример No1
Данные на входе:123
Данные на выходе:YES

Пример No2
Данные на входе:528
Данные на выходе:NO
 */

#include <stdio.h>

int is_happy_number(int a)
{
    int sum = 0, mult = 1;
    while (a > 0)
    {        
        sum += a % 10;
        mult *= a % 10;
        a /= 10;
    }
    if (sum == mult)
        return 1;
    else
        return 0;    
}


int main()
{
    int a;
    printf("Введите число: \n");
    scanf("%u", &a);
    is_happy_number(a) ? printf("YES") : printf("NO");
    return 0;
}


