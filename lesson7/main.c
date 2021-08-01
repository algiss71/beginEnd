#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mas[10];
    int i = 0;

    while(i < 10)
    {
        if(i > 4)
            mas[i] = i * i;
        else
            mas[i] = 7;

        printf("%d = %d\n", i, mas[i]);
        i = i + 1;

    }
    return 0;
}
