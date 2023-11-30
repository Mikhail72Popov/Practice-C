// Вывести таблицу целиком. Допишите оставшийся код на 32 и 64
// #include <stdio.h>

// int main(int argc, char **argv) {
//     printf("+---------------------------------------------------------------------+\n");
//     printf("|   Type        | Byte(s)  |                   |                      |\n");
//     printf("|               \\of memory/                 Min|                   Max|\n");
//     printf("|                 \\     /                      |                      |\n");
//     printf("+------------------+-+------------------------+-----------------------+\n");
//     printf("|%18s|%d|                    %"PRId32"|                   %"PRId32"|\n", "int32_t",
//     sizeof(int32_t), INT32_MIN, INT32_MAX);
//     printf("|%18s|%d|                       %"PRIu32"|                   %"PRIu32"|\n","uint32_t",
//     sizeof(uint32_t),0, UINT32_MAX);
//     printf("|%18s|%d|                  %"PRId64"|                 %"PRId64"|\n","int64_t",
//     sizeof(int64_t),INT64_MIN,INT64_MAX);
//     printf("|%18s|%d|                       %"PRIu64"|                 %"PRId64"|\n","int64_t",
//     sizeof(uint64_t),OLLU,UINT64_MAX); //0LLU — литерал обозначающий беззнаковое целое типа unsigned long long
// }