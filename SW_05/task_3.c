/* Составить функцию, которая переводит число N из десятичной системы счисления в P-ичную
систему счисления.
Данные на входе:Два целых числа. N >0 и P в диапазоне от 2 до 9 включительно
Данные на выходе:Одно целое число

Пример No1
Данные на входе:25 5
Данные на выходе:100

Пример No2
Данные на входе:9 2
Данные на выходе:1001

Пример No3
Данные на входе:11 3
Данные на выходе:102
 */

#include <stdio.h>

int notation(int n, int p);

int main()
{
    int n, p;
    scanf("%d%d", &n, &p);
    printf("%d\n", notation(n, p));
    return 0;
}

int notation(int n, int p)
{
int remainder;
int exponent = 1;
int res = 0;
for(;n > 0;n /= p)
    {
    remainder = n % p;
    res += remainder * exponent;
    exponent *= 10;
    }
    return res;
}