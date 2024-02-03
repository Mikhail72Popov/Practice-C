/* В файле .txt записаны символы. Необходимо разработать функцию, которая
меняет местами пары соседних символов не обращая внимание на символы
пробел. Если количество символов нечетно (пробелы не считаем), то
последний символ не меняем. Результат записать в файл .txt.
Данные на входе:Строка из английских букв, пробелов и знаков препинания. Не более 1000 символов.
Данные на выходе:Строка из английских букв, пробелов и знаков препинания.

Пример No1
Данные на входе:Hello world!
Данные на выходе:eHllw orodl!

Пример No2
Данные на входе:abc def
Данные на выходе:bad cfe

 */

#include <stdio.h>
#include "func.c"

void changing_char(char *str);

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
	read_file(str, file_read);
	changing_char(str);
	write_file(str, file_write);
	return 0;
}