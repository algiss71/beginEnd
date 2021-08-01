#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x=0;
    float y=0;
    int i=0;

    printf("input x = ");
    scanf("%f", &x);


    printf("input y = ");
    scanf("%f", &y);


    printf("input oper: \n 1 = +, \n 2 = -,\n 3 = *,\n 4 = /\n");
    scanf("%d", &i);

    if(i == 1) printf("%.2f + %.2f = %.2f", x, y, x + y);
    if(i == 2) printf("%.2f - %.2f = %.2f", x, y, x - y);
    if(i == 3) printf("%.2f * %.2f = %.2f", x, y, x * y);
    if(i == 4) printf("%.2f / %.2f = %.2f", x, y, x / y);


    return 0;
}
