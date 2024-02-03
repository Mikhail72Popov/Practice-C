/* В файле .txt записан полный адрес файла (возможно, без расширения).
Необходимо изменить его расширение на ".html" и записать результат в файл
.txt.
Данные на входе:Строка состоящая из символов: a-z, A-Z, 0-9, /
Данные на выходе:Исходная строка с измененным расширением.

Пример No1
Данные на входе:/DOC.TXT/qqq
Данные на выходе:/DOC.TXT/qqq.html

Пример No2
Данные на входе:/DOC.TXT/qqq.com
Данные на выходе:/DOC.TXT/qqq.html
 */
#include <stdio.h>
#include "func.c"

void change_path(char *str, char *dst);

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
	change_path(str, dst);
	write_file(dst, file_write);
	return 0;
}