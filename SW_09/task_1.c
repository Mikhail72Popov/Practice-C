/* В файле .txt дана строка из 1000 символов. Показать номера символов, совпадающих с
последним символом строки. Результат записать в файл .txt
Данные на входе:Строка не более 1000 символов

Данные на выходе: Целые числа через пробел - номера символа, который совпадает с
последним символом строки.

Пример
Данные на входе:aabbcdb
Данные на выходе:23
 */

#include <stdio.h>
#include <string.h>
#define MAXELEMENTS 100

void input(char *string)
{
    FILE *in;
    in = fopen("input.txt", "r");
    while(fscanf(in, "%[^\n]", string) == 1);
    fclose(in);
}

void output(char *str)
{
    FILE *out;
    out = fopen("output.txt", "w");
    int len = strlen(str)-1;
    for(int i = 0; i < len; i++)
    if(str[i] == str[len])
    fprintf(out, "%d ", i);
    fclose(out);
    }
        int main(int argc, char **argv)
    {
    char stringFile[MAXELEMENTS];
    input(stringFile);
    output(stringFile);
    return 0;
}