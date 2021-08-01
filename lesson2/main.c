#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t = 5;
    if (t > 10)
    {
        printf("Yes");
        if(t > 20)
            printf("123 \n");
        if(t > 30)
            printf("567\n%d\n", t);
    }
    else
    {
        printf("ggg");
        return 7;
    }


    return 2;
}
