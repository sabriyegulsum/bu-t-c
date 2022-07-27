#include <stdio.h>
#define SIZE 5
int main ()
{
    int a[SIZE]={76,28,45,90,23};
    int max=0;
    for(int i=0;i<SIZE; i++)
    if(a[i]>max)
        max=a[i];
    printf("max sayı: %d",max);
    return 0;
}