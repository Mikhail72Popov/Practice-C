#include <stdio.h>
int main()
{
    int a1, n, d;
    scanf("%d,%d,%d", &a1, &n, &d);//в scanf лучше не добавлять лишние символы, показать "%d,%d,%d"

    int sum = (2 * a1 + (n - 1) * d) * n / 2;
    printf("%d\n", sum);
    
    return 0;
}