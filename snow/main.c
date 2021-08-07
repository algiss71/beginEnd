#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define h 25
#define w 80

char mas[h][w+1];

void init()
{
    for(int i = 0; i < w; i++)
        mas[0][i] = '#';
    mas[0][w] = '\0';
    for(int i = 0; i < h; i++)
        sprintf(mas[i],mas[0]);
}

void show()
{
    mas[h-1][w-1] = '\0';
    for(int i = 0; i < w; i++)
        printf(mas[i]);
}

int main()
{
    init();
    show();
    //printf("Hello world!\n");
    return 0;
}
