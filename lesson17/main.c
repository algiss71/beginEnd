/*
Создайте строку из 20 символов и заполните её случайными симолами.
Выведите строку на жэкран.
Заполните строку случайными символами от 'a' до 'z'.97-122

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char c[21];
    int i;
    int rnd;

    srand( time( NULL ) );
    //printf("%i\n", c);
    //char d ='z';
    //printf("%i\n", d);
    for(i = 0; i < 20; i++)
    {
        rnd = rand();
        c[i]= rnd % 26 + 97;
        printf("%c ",c[i]);
    }


    return 0;
}
