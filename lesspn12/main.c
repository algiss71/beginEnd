#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

//������� ������� ������� (y) = 10 � �������(�) = 20 (+1 ��� ������� ����� ������)c
//    ������� ���������� ������� �������� mass.

    char mass[10][21];
//���������� � �� ������

    int i;
    int x = 10, y =5;//��������� ���������� ������(@)
    char key; //���������� ��� �������� ������� �������

//�������� ������� ������
    sprintf(mass[0],"####################");
//�������� ������ �� 2 �� �������������
    for(i = 1; i < 9; i++)
        sprintf(mass[i],"#                  #");
// �������� ������ ������� �������
    sprintf(mass[9],"####################");
//��������� ��������� ������ �������


//������������� ������ � ������� �� ��������� �����������

    mass[y][x] = '@';
    for(i = 0; i < 10; i++)
        printf("%s\n", mass[i]);
    /*
    ����������������� ���� �������, ������� ����� ��������
    �� ������� ������������ � ���� ������� � ������������.
    ������ ������������ �������� ��������� � ����� �������� #.
    */


    key = getch();//������� ������� �������
    if(key == 'w') y--;//�����
    if(key == 's') y++;//����
    if(key == 'a') x--;
    if(key == 'd') y++;



    return 0;
}
