#include <stdio.h>
#include <stdlib.h>

void init(int rows, int cols)
{
    int i,j;
    int a[rows][cols];
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            a[i][j] = ( i + 1) * (j + 1);
}

void printArray(int rows, int cols)
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%2d ",a[i][j]);

        printf("\n");

}
int main()
{
    int r,c;
    r=9;c=9;
    init(r,c);
    printArray(r,c);



    }
    return 0;
}
