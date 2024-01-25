/* В файле .txt считать символьную строку, не более 10 000 символов. Посчитать
количество строчных (маленьких) и прописных (больших) букв в введенной строке.
Учитывать только английские буквы. Результат записать в файл .txt.
Данные на входе:Строка состоящая из английских букв, цифр, пробелов и
знаков препинания.
Данные на выходе: Два целых числа. Количество строчных букв и количество
заглавных букв.

Пример No1
Данные на входе:aabbAB
Данные на выходе: 4 2

Пример No2
Данные на входе:HELLO WORLD
Данные на выходе: 0 10 
*/

#include <stdio.h>
#include <string.h>
#define SIZE 10001

void input(char *strIn)
{
    FILE *in;
    in = fopen("input.txt", "r");
    while(fscanf(in, "%[^\n]", strIn) == 1);
    fclose(in);
}

int uppercaseCount(char *strUp)
{
    int sumUp = 0;
    for(int i = 0; i < strlen(strUp);
    i++)
    if(strUp[i] >= 'A' && strUp[i] <= 'Z')
    sumUp++;
    return sumUp;
}

int lowercaseCount(char *strLow)
{
    int sumLow = 0;
    for(int i = 0; i < strlen(strLow);
    i++)
    if(strLow[i] >= 'a' &&
    strLow[i] <= 'z')
    sumLow++;
    return sumLow;
}

void output(int countLow, int countUp)
{
    FILE *out;
    out = fopen("output.txt", "w");
    fprintf(out, "%d %d", countLow,
    countUp);
    fclose(out);
}

int main(int argc, char **argv)
{
    char str[SIZE];
    input(str);
    //uppercaseCount(str);
    output(lowercaseCount(str),
    uppercaseCount(str));
    return 0;
}