
#include <stdint.h>
#define SIZE 30
struct sensor
{
	uint8_t day;
	uint8_t month;
	uint16_t year;
	uint8_t minute;
	int8_t t;
};
// смена элементов местами
void cgangeIJ(struct sensor *info, int i, int j);

// упорядочивающую его по неубыванию температуры
void SortByT(struct sensor *info, int n);
unsigned int DateToInt(struct sensor *info);

// упорядочивающую его по дате
void SortByDate(struct sensor *info, int n);

// добавить запись
void AddRecord(struct sensor *info, int number,
			   uint16_t year, uint8_t month, uint8_t day, int8_t t);

// добавить информацию
int AddInfo(struct sensor *info);

// вывод
void print(struct sensor *info, int number);