/* В файле .txt дана строка, не более 1000 символов, содержащая буквы, целые числа и
иные символы. Требуется все числа, которые встречаются в строке, поместить в
отдельный целочисленный массив. Например, если дана строка "data 48 call 9 read13
blank0a", то в массиве числа 48, 9, 13 и 0. Вывести массив по возрастанию в файл .txt.
Данные на входе:Строка из английских букв, цифр и знаков препинания
Данные на выходе:Последовательность целых чисел отсортированная по
возрастанию

Пример
Данные на входе:data 48 call 9 read13 blank0a
Данные на выходе:0 9 13 48
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int size = 5;

void init_arr(int arr[])
{
	for (int i = 0; i < size; i++)
		arr[i] = 0;
}

void read_file(char *str, char *filename_read)
{
	FILE *fp;
	char ch;
	int i = 0;
	fp = fopen(filename_read, "r");
	while((ch = fgetc(fp)) != EOF)
		str[i++] = ch;
	str[i] = '\0';
	fclose(fp);
}

void set_arr(char *str, int arr[])
{
	int coun = 0;
	init_arr(arr);
	for (int j = 0; j <strlen(str); j++)
	{
		if (coun > size)
		{
			printf("Ошибка, увеличьте размер!");
			break;
		}
		if (isdigit(str[j])){
			arr[coun] = arr[coun] * 10 + str[j] - '0';
		}
		if (isdigit(str[j]) && !(isdigit(str[j+1])))
			coun++;
	}
}
void write_file(int arr[], char *filename_write)
{
	FILE *fp = fopen(filename_write, "w");
	if(fp)
    {
		for (int i = 0; i < size; i++)
		{
			fprintf(fp, "%d ", arr[i]);
		}
		fclose(fp);
	}
}

void sort_array(int size, int a[])
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            tmp = a[j];
            if (tmp > a[j + 1])
            {
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
}

int main(void)
{
	char str[1000] = {0};
	int arr[size];
    char * filename_read = "input_3.txt";
    char * filename_write = "output_3.txt";
    read_file(str, filename_read);
    set_arr(str, arr);
    sort_array(size, arr);
    write_file(arr, filename_write);
    return 0;
}



