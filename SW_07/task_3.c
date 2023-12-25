/* Считать 10 чисел в диапазоне от -500 до 500 и разложить по двум массивам: в
одни помещать только положительные, во второй - только отрицательные. Числа,
равные нулю, игнорировать. Вывести на экран все элементы обоих массивов.
Данные на входе:10 целых чисел через пробел.
Данные на выходе:Сперва положительные числа, потом отрицательыне числа, через пробел.

Пример
Данные на входе:5 -4 0 1 4 -3 -3 3 0 2
Данные на выходе:5 1 4 3 2 -4 -3 -3

 */

#include <stdio.h>

int Input(int arr[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    scanf("%d",&arr[i]);
    return i;
}

void Print(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    printf("%d ",arr[i]);
}

void sortPrint(int in[],int len)
{
    int countP = 0;
    int countN = 0;
    int pos[len], neg[len];
    for(int i = 0; i < len; i++)
    if(in[i] > 0)
    pos[countP++] = in[i];
    else if(in[i] < 0)
    neg[countN++] = in[i];
    Print(pos,countP);
    Print(neg,countN);
}

int main()
{
    enum {SIZE = 10};
    int in[SIZE];
    Input(in,SIZE);
    sortPrint(in,SIZE);
    return 0;
}