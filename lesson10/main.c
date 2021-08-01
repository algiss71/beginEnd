#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("FOR\n");
    for(i = 2; i < 19; i += 2)
        printf("%d, ",i);

    printf("\nWHILE\n");
    i = 2;
    while(i < 19)
    {
        printf("%d, ",i);
        i += 2;
    }

    printf("\nDO...WHILE\n");
    i = 2;
    do
    {
        printf("%d, ",i);
        i += 2;
    }
    while(i < 19);

    printf("\n");

    char str1[8];
    for(i = 0; i < 8; i++)
         str1[i] = '#';

    printf("%s",str1);
    printf("\n");
    i = 0;
    do
    {
        printf("%c\n", str1[i]);
        i++;
    }
    while(str1[i] != '\0');
    return 0;
}
