#include <stdio.h>
#include <stdlib.h>
/*
напишите процедуру, которая имеет входной параметр int x,
если х < 10, выводим х иначе error.вызовите процедуру 2 раза
со значениями 5 и 5.
*/
void proc(int x)
{
    if(x < 10)
        printf("%d \n", x);
    else
        printf("error\n");

}

int tooCh(int a, int b)
{
    if(a > b)
        return 1;
    else
        return 0;
}
int main()
{
    int i = 0;
    int a = 0;
    int b = 0;

    proc(5);
    proc(15);

    printf("input a = ");
    scanf("%d", &a);


    printf("input b = ");
    scanf("%d", &b);


    i = tooCh(a,b);
    proc(i);

    return 0;
}
