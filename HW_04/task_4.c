// Ввести целое число и «перевернуть» его, так чтобы первая цифра стала последней и т.д.
// Данные на входе: Целое неотрицательное число
// Данные на выходе: Целое неотрицательное число наоборот

// Пример No1
// Данные на входе: 1234
// Данные на выходе: 4321

// Пример No2
// Данные на входе: 782
// Данные на выходе: 287

#include <stdio.h>

int main(void)
{
    int num;
    printf("Введите одно целое неотрицательное число: \n");
    scanf("%d", &num);
    
    int mun = 0;
    while (num > 0) 
    {
        mun = mun * 10 + (num % 10);
        num = num / 10;  
    }
    printf("%d\n", mun);
}
