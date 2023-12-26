/* 
#include  <stdio.h>
#include  <stdlib.h>
#include  <time.h>
 
#define N 10
 
void arr_print(int *arr, size_t size) {
    for (size_t i=0; i<size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
 
int cmp(void *a, void *b) {
    return *(int*)a%10 - *(int*)b%10;
}
int main(void)
{
    int arr[N];
    // printf("Введите массив из 10 элементов \n");
    // scanf("%d", &arr[N]);
    
    srand(time(NULL));
    
    for (size_t i=0; i<N; ++i)
    {
        arr[i] = rand() % 100;
    }
    arr_print(arr, N);
    qsort(arr, N, sizeof(int), cmp);
    arr_print(arr, N);
    return 0;
} 
*/