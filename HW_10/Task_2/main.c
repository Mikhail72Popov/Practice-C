/* В файле .txt необходимо удалить все лишние пробелы (в начале предложения
и сдвоенные пробелы). Для решения задачи разработать функцию. Результат
записать в .txt.
Данные на входе:Строка из английских букв, знаков препинания и пробелов. Не более 1000 символов.
Данные на выходе:Строка из английских букв, знаков препинания и пробелов.

Пример
Данные на входе:  Hello world!
Данные на выходе:Hello world!

 */

#include <stdio.h>
#include "func.c"

void delete_space(char *str, char *dst);

void read_file(char *str, char *name)
{
	FILE *fp;
	if ((fp = fopen(name, "r")) != NULL)
	{
		fscanf(fp, "%[^\n]", str);
	}
	fclose(fp);
}

void write_file(char *str, char *name)
{
	FILE *fp;
	if ((fp = fopen(name, "w")) != NULL)
	{
		fprintf(fp, "%s", str);
	}
	fclose(fp);
}

int main(int argc, char **argv)
{
	char file_read[] = "input.txt";
	char file_write[] = "output.txt";
	char str[1000];
	char dst[1000];
	read_file(str, file_read);
	delete_space(str, dst);
	write_file(dst, file_write);
	return 0;
}