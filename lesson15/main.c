#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
typedef struct commode{
int l,w,h;
char name[50];
char color[10];
}com;

int main()
{

    setlocale(LC_ALL, "Russian");

    com c;
    c.l = 100;
    c.w = 60;
    c.h = 120;
    sprintf(c.name, "Rich");
    sprintf(c.color,"Black");
    printf("����� %s, ���� %s, ����� %d, ������ %d, ������ %d\n", c.name, c.color, c.l, c.w, c.h);

    com arr[3];

    arr[0].l = 100;
    arr[0].w = 80;
    arr[0].h = 110;
    sprintf(arr[0].name, "������");
    sprintf(arr[0].color,"������");

    arr[1].l = 90;
    arr[1].w = 85;
    arr[1].h = 115;
    sprintf(arr[1].name, "������");
    sprintf(arr[1].color,"�����");

    arr[2].l = 120;
    arr[2].w = 115;
    arr[2].h = 95;
    sprintf(arr[2].name, "�����");
    sprintf(arr[2].color,"�������");

    for(int i = 0; i < 3; i++)
        printf("����� %s, ���� %s, ����� %d, ������ %d, ������ %d\n", arr[i].name, arr[i].color, arr[i].l, arr[i].w, arr[i].h);
    return 0;
}
