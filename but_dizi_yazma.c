#include <stdio.h>
#define SIZE 5
int main ()
{
    int a[SIZE]={12,34,54,67,54};
    for(int i=0; i<SIZE; i++)
    {
        printf("a[%d]= %d\n",i,a[i]);
    }
    return 0;
}