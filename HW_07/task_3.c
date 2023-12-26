/* Считать массив из 12 элементов и выполнить циклический сдвиг ВПРАВО на 4
элемента.
Данные на входе:12 целых чисел через пробел
Данные на выходе:12 целых чисел через пробел

Пример No1
Данные на входе:4 -5 3 10 -4 -6 8 -10 1 0 5 7
Данные на выходе:1 0 5 7 4 -5 3 10 -4 -6 8 -10

Пример No2
Данные на входе:1 2 3 4 5 6 7 8 9 10 11 12
Данные на выходе:9 10 11 12 1 2 3 4 5 6 7 8
 */


#include <stdio.h>

void shiftArray(int arr[], int size, int shift) {
    int temp[size];
    for (int i = 0; i < size; i++) 
    {
        temp[i] = arr[(i + shift) % size];
    }
    for (int i = 0; i < size; i++) 
    {
        arr[i] = temp[i];
    }
}


int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // printf("Введите массив из 12 элементов \n");
    // scanf("%d", &arr[i]);
    int size = sizeof(arr) / sizeof(arr[0]);
    int shift = 8;
    shiftArray(arr, size, shift);
    for (int i = 0; i < size; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
