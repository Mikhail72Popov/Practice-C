/* В файле .txt дана символьная строка не более 1000 символов. Необходимо заменить
все буквы "а" на буквы "b" и наоборот, как заглавные, так и строчные. Результат
записать в .txt.
Данные на входе:Строка из маленьких и больших английских букв, знаков
препинания и пробелов.
Данные на выходе:Строка из маленьких и больших английских букв, знаков
препинания и пробелов.

Пример
Данные на входе:aabbccddABCD
Данные на выходе:bbaaccddBACD

 */

#include <stdio.h>
#include <string.h>

void read_file(char *str, char *filename_read)
{
	FILE *fp = fopen(filename_read, "r");
    if(fp)
    {
        fscanf(fp, "%s", str);
        fclose(fp);
    }
}

void write_file(char *str, char *filename_write)
{
	FILE *fp = fopen(filename_write, "w");
	if(fp)
    {
		fprintf(fp, "%s", str++);
		fclose(fp);
	}
}

int compare(char a, char b)
{
    if (a == b)
        return 1;
    else
        return 0;
}

void change_simvol(char *str)
{
    for (int i = 0; i < strlen(str); i++)
    {
		if (compare(str[i], 'a')){str[i] = 'b';}
		else if (compare(str[i], 'b')){str[i] = 'a';}
		else if (compare(str[i], 'A')){str[i] = 'B';}
		else if (compare(str[i], 'B')){str[i] = 'A';}
		else
			continue;
    }
}

int main(void)
{
	char str[1000] = {0};
    char * filename_read = "input_2.txt";
    char * filename_write = "output_2.txt";
    read_file(str, filename_read);
    change_simvol(str);
    write_file(str, filename_write);
    return 0;
}