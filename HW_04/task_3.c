// Ввести целое число и определить, верно ли, что все его цифры четные
// Данные на входе:Одно целое число
// Данные на выходе:YES или NO

// Пример No1
// Данные на входе:2684
// Данные на выходе:YES

// Пример No2
// Данные на входе:2994
// Данные на выходе:NO

#include <stdio.h>

int main(void)
{
    int a;
    printf("Введите одно целое число: \n");
    scanf("%d", &a);
    
    if (flag (a)) 
    {
        printf("YES \n");

    }
    else 
    {
        printf("NO \n");
    }
    return 0;
}

int flag (int n) 
{
    while (n > 0) 
    {
        if (n % 2) 
        {
            return 0;
        }
        n = n / 10;
    }
    return 1;
}