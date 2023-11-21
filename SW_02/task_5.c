#include <stdio.h>
// На вход подается произвольное трехзначное число, напечатать сумму цифр

int main(void)
{
    int x;
    printf("Введите число: \n");
    scanf("%d", &x);
    printf("%d\n", (x / 100) + ((x % 100) / 10) + (x % 10));
    return 0;
}