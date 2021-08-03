#include <stdio.h>
#include <stdlib.h>

void init(int arr[][],const int rows,const int cols)
{
     int i,j;
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            arr[i][j] = ( i + 1) * (j + 1);
}

void printArray(int arr[][],const int rows,const int cols)
{
    int i,j;
    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
            printf("%2d ",arr[i][j]);

        printf("\n");

}
int main()
{
    const int r;
    const int c;
    int arr[r][c];


    init(a[r][c],r,c);


    printArray(r,c);



    }
    return 0;
}
