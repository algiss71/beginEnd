#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
int main()
{

//������� ������� ������� (y) = 10 � �������(�) = 20 (+1 ��� ������� ����� ������)c
//    ������� ���������� ������� �������� mass.
    setlocale(LC_ALL, "Russian");


    char mass[10][21];
//���������� � �� ������

    int i;
    int x = 10, y =5;//��������� ���������� ������(@)
    char key; //���������� ��� �������� ������� �������
    int ox, oy;//���������� ������ �� �����������
    int ax = 5, ay = 3; //���������� ��������� ������
    int a = 0; //���������� ��������� �����
    srand (time(NULL)); //��������� ��������� �����

    do
    {
        //�������� ������� ������
        sprintf(mass[0],"####################");
        //�������� ������ �� 2 �� �������������
        for(i = 1; i < 9; i++)
            sprintf(mass[i],"#                  #");
        // �������� ������ ������� �������
        sprintf(mass[9],"####################");
        //������������� ������ � ������� �� ��������� �����������

        mass[y][x] = '@'; //���������� ������
        mass[ay][ax] = '*';// ���������� ������
        system("cls");

        for(i = 0; i < 10; i++)
            printf("%s\n", mass[i]);
        printf("\n ������� ����� = %d", a );

        /*
        ����������������� ���� �������, ������� ����� ��������
        �� ������� ������������ � ���� ������� � ������������.
        ������ ������������ �������� ��������� � ����� �������� #.
        */
        key = getch();//������� ������� �������

        ox = x;
        oy = y;

        if(key == 'w') y--;//�����
        if(key == 's') y++;//����
        if(key == 'a') x--;//�����
        if(key == 'd') x++;//������

        if(mass[y][x] == '#')//���� ������ �������� �� ������� �����������
        {                   //�� ���������� ����������
            x = ox;
            y = oy;
        }

        if((x == ax) && (y == ay))//���� ���������� ������ � ������ �������
        {                         // ���� ������ ����� ���������� � �������� �������
            ax = rand() % 18 + 1;
            ay = rand() % 8 + 1;
            a++;
        }


    }
    while(key != 'e');




    return 0;
}
