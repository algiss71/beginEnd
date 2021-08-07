#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

#define width 65 //������ �������� ����
#define height 25//������ �������� ����


typedef struct{
    int x,y;//��������� ������ �� ���� ���������
    int w;//������ ������

}TRacket;

typedef struct{
    float x,y;//��������� ������ �� ���� ���������
    int ix,iy;
    float alpha;//���� �������
    float speed;//��������
}TBall;

char mas[height][width+1];//������� ����
TRacket racket;
TBall ball;
void moveBall(float x,float y)
{
    ball.x = x;
    ball.y = y;
    ball.ix = (int)round(ball.x);
    ball.iy = (int)round(ball.y);

}
//������������� ������
void initBall()
{
    moveBall(2.0,2.0);
    ball.alpha = -1;
    ball.speed = 0.5;
}
//������� ��������� ������ �� ������� ����
void putBall()
{
    mas[ball.iy][ball.ix] = '*';
}
//������� ����������� ������

void automoveBall()
{
    moveBall(ball.x + cos(ball.alpha) * ball.speed,
             ball.y + sin(ball.alpha) * ball.speed);
}

//������������� �������
void initRacket()
{
    racket.w  = 7;//������ �������
    racket.x = (width - racket.w)/2;//��������� ��������� �� ��� �
    racket.y = height - 1;
}
//������� ��������� ������� �� ������� ����
void putRacket()
{
    for(int i = racket.x;i < racket.x + racket.w;i++)
        mas[racket.y][i] = '@';
}
//������� ����������� �������
void moveRacket(int x)
{
    racket.x = x;

    if(racket.x < 1)//����� ����
        racket.x = 1;
    if(racket.x + racket.w >= width)//������ ����
        racket.x = width - racket.w -1 ;
}
void init()//���������� �������� ����
{
    for(int i=0; i<width;i++) // ������� ������ ��������� ���������
        mas[0][i] = '#';

    mas[0][width] = '\0';

    strncpy(mas[1], mas[0], width + 1);//����������� ������� ������ � ������

    for(int i=1; i<width-1;i++)//������ ������ ��������� ��������� ����� 1 � ���������� �������
        mas[1][i] = ' ';


    for(int i=2; i<height;i++)
        strncpy(mas[i],mas[1],width+1);//������ ������ ����������� �� ��� ���������
}

void show()
{
    for(int i = 0; i < height; i++)
    {
        printf("%s", mas[i]);
        if(i < height - 1)
            printf("\n");
    }
}

void setcur(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
int main()
{
    //char c;//��������� ������� ������
    BOOL run = FALSE;
    initRacket();
    initBall();

    do
    {
        setcur(0, 0);//system("cls");
        if(run)
            automoveBall();
        init();
        putRacket();
        putBall();
        show();
        /*c = getch();
        if(c=='a') moveRacket(racket.x - 1);
        if(c=='d') moveRacket(racket.x + 1);
        */

        if(GetKeyState('A') < 0) moveRacket(racket.x - 1);//<0 - ������� ������
        if(GetKeyState('D') < 0) moveRacket(racket.x + 1);
        if(GetKeyState('W') < 0) run = TRUE;

        if(!run)
            moveBall(racket.x + racket.w / 2,racket.y - 1);
        Sleep(10);
    }while(GetKeyState(VK_ESCAPE)>=0);
    //printf("Hello world!\n");
    return 0;
}
