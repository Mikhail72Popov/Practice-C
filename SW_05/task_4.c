/* Составить функцию вычисления N!. Использовать ее при вычислении
факториала.
int factorial(int n)
Данные на входе:Целое положительное число не больше 20
Данные на выходе:Целое положительное число

Пример No1
Данные на входе:5
Данные на выходе:120
 */

#include <stdio.h>

unsigned long long int fac(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%llu\n", fac(n));
    return 0;
}

unsigned long long int fac(int n)
{
    int i;
    unsigned long long int res = 1;
    for (i = 1; i <= n; i++)
    res *= i;
    return res;
}