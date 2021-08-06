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
    int rnd1;

    rnd = rand() % 10 + 9;
        printf("%d \n", rnd);

    for(i = 0; i < N; i++)
    {
        rnd = rand();
        rnd1 = rnd % 20;
        arr[i] = rnd1 + 19;;
        printf("%d - %d - %d\n ",rnd, rnd1, arr[i]);
    }
        printf("\n");


    return 0;
}
