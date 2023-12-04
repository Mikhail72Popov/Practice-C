// Ввести целое число и определить, верно ли, что в нём ровно 3 цифры.
// Данные на входе:Целое положительное число
// Данные на выходе:Одно слово: YES или NO

// Пример No1
// Данные на входе:123
// Данные на выходе:YES

// Пример No2
// Данные на входе:1234
// Данные на выходе:NO

#include <stdio.h>

int main(void)
{
    int a;
    printf("Введите целое положительное число: \n");

    scanf("%d", &a);
    if (a > 0)
    {    
        if (a/1000 == 0 && a/100 != 0 && a/10 != 0)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }  
    else printf("Введено не целое положительное число: \n");
    return 0;
}