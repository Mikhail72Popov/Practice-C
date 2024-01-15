/* Написать только одну функцию. Всю программу отправлять не надо. Вывести в
порядке возрастания цифры, входящие в строку. Цифра - количество. Функция
должно строго соответствовать прототипу:
void print_digit(char s[])
Данные на входе:Строка из английских букв, пробелов, знаков препинания и
цифр
Данные на выходе: Функция должна принимать на вход строку и выводить на печать
по формату: Цифра пробел количество.

Пример

Данные на входе:Hello123 world77.
Данные на выходе: 1 1 2 1 3 1 7 2 */

#include <stdio.h>

void PrintDigist(int r[])
{
    for (int i = 0; i < 10; i++)
    {
        if(r[i] != 0)
            printf("%d%d", i, r[i]);
    }
}

void count_digits(char s[], int* r)
{
    for (int i=0; s[i]!=0; i++)
    {
        if(s[i] >= '0' && s[i] <= '10')
            r[s[i] - '0']++;
    }
}

// int Input(char arr[])
// {
//     int i=0;
//     char inputSymbol=0;
//     while(inputSymbol != '.')
//     {
//         scanf("%c", &inputSymbol);
//         arr[i++] = inputSymbol;
//     }
//     arr[i++] = 0;
//     return i;
// }

int main(int argc, char const *argv[])
{
    // enum {BUFFER_SIZE = 100};
    // char buffer[BUFFER_SIZE];
    int r[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}; // scanf("%s", buffer);
    char s[100];
    scanf("%[0-9]", s);
    // Input(buffer);
    count_digits(s, r);
    PrintDigist(r);
    return 0;
}