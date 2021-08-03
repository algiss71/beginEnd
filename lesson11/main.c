#include <stdio.h>
#include <stdlib.h>
#define ROWS 9
#define COLS 9
int main()
{
    //const int rows = 9;
    //const int cols = 9;
    int arr[ROWS][COLS];
    int i = 0,j = 0;

    for( i = 0; i < ROWS; i++)
    {
        for(j = 0; j < COLS; j++)
            {
                arr[i][j] = ( i + 1) * (j + 1);
                if(i == 4)
                    arr[i][j] = 5;
                if(j == 2)
                    arr[i][j] = 3;

                printf("%2d ",arr[i][j]);
            }

        printf("\n");

    }


    return 0;
}
