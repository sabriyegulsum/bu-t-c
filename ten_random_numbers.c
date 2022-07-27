#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i,n;
    for(i=0; i<10; i++)
    {
        n=  rand() % 10+1;
        printf("%d\n",n);
    }
    return 0;
}