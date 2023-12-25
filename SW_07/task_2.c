/* Считать массив из 10 элементов и выполнить инверсию отдельно для 1-ой и 2-ой
половин массива. Необходимо изменить считанный массив и напечатать его
одним циклом.
Данные на входе:10 целых элементов массива через пробел.
Данные на выходе:10 целых элементов массива через пробел.

Пример No1
Данные на входе:4 -5 3 10 -4 -6 8 -10 1 0
Данные на выходе:-4 10 3 -5 4 0 1 -10 8 -6

Пример No2
Данные на входе:1 2 3 4 5 6 7 8 9 10
Данные на выходе:5 4 3 2 1 10 9 8 7 6
 */

#include <stdio.h>
void aPrint(int *arr, int len)
{
    for (int i = 0; i < len; i++)
    printf("%d ",arr[i]);;
}

void reverseArray(int * array, int
num)
{
    for ( int i = 0, j = num - 1; i <
    j; i++, j--)
    {
        int t = array[i];
        array[i] = array[j];
        array[j] = t;
    }
}

int main()
{
    enum {aSize = 10};
    int array[aSize] = {0};
    for(int i=0; i < aSize; i++)
    scanf("%d", &array[i]);
    reverseArray(array, aSize/2);
    reverseArray(&array[aSize/2],
    aSize/2);
    aPrint(array, aSize);
    return 0;
}