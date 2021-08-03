#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 30
int main()
{
    int i = 0;
    int arr[N];
    srand (time(NULL));
    int rnd;

    rnd = rand() % 10 + 9;
        printf("%d \n", rnd);

    for(i = 0; i < N; i++)
    {
        arr[i] = rand() % 20 + 19;;
        printf("%d ",arr[i]);
    }
        printf("\n");


    return 0;
}
