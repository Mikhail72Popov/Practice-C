#include <stdio.h>
#include <unistd.h>
#include "temp_functions.h"

void file_read(struct sensor *line, char *name)
{
	FILE *open;
	char name[] = "temperature_big.csv";
	open = fopen(name, "r");
	if (open == NULL)
		return 1;
	fclose(open);
}

void parse_cmdline(int argc, char *argv[])
{
	char c;
	char *in;
	// extern int optarg, opterr;
	while ((c = getopt(argc, argv, "f:m:h")) != -1)
	{
		switch (c)
		{
		case 'h':
			print_help();
			exit(EXIT_SUCCESS);
			break;
		case 'f':
			in = strstr(optarg, "temperature_big.csv");
			if (in != NULL)

		case 'm':
			if (1 < *optarg && *optarg < 12)

		case '?':
			if (*optarg == 'f' || *optarg == 'm')
				fprintf(stderr, "option -%c requires an argument\n", *optarg);
			exit(EXIT_FAILURE);
			break;
		default:
			fprintf(stderr, "invalid arguments, try -h for help.");
			exit(EXIT_FAILURE);
		}
	}
}

void cgangeIJ(struct sensor *info, int i, int j)
{
	struct sensor temp;
	temp = info[i];
	info[i] = info[j];
	info[j] = temp;
}

void SortByT(struct sensor *info, int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = i; j < n; ++j)
			if (info[i].T >= info[j].T)
				cgangeIJ(info, i, j);
}
unsigned int DateToInt(struct sensor *info)
{
	return info->Y << 16 | info->MM << 8 | info->D;
}

void SortByDate(struct sensor *info, int n)
{
	for (int i = 0; i < n; ++i)
		for (int j = i; j < n; ++j)
			if (DateToInt(info + i) >= DateToInt(info + j))
				cgangeIJ(info, i, j);
}

void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hourse, uint8_t minute, int8_t t)
{
	info[number].Y = year;
	info[number].MM = month;
	info[number].D = day;
	info[number].H = hourse;
	info[number].MI = minute;
	info[number].T = t;
}

int AddInfo(struct sensor *info)
{
	int counter = 0;
	AddRecord(info, counter++, 2021, 3, 1, 13, 40, -5);
	AddRecord(info, counter++, 2021, 2, 9, 1, 50, -3);
	AddRecord(info, counter++, 2021, 2, 15, 24, 25, -15);
	AddRecord(info, counter++, 2021, 4, 12, 18, 30, 5);
	return counter;
}

void print_prog(struct sensor *info, int number)
{
	printf("===================================\n");
	for (int i = 0; i < number; i++)
		printf("%04d-%02d-%02d t=%3d\n",
			   info[i].Y,
			   info[i].MM,
			   info[i].D,
			   info[i].T);
}

void print_help(void)
{
	printf("===================================\n");
	printf("Эта программа показывает статистику данных датчика температуры за год или за указанный месяц.\n");
	printf("Для вывода данных необходимо указать путь к файлу данных.\n");
	printf("\n");
	printf("\tprog -f <temperature_big.csv>\n");
	printf("\n");
	printf("Список ключей, которые обрабатывает это приложение, и их назначение\n");
	printf("\n");
	printf("\t-h показать справку\n");
	printf("\t-f <temperature_big.csv> входной csv-файл для обработки\n");
	printf("\t-m <номер месяца> отображаются только за указанный месяц.\n");
	printf("===================================\n");
}
