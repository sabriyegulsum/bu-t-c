#include <stdio.h>
#define SIZE 10
int main()
{
    int i,j,k=0;
    int a[SIZE];
    printf("10 tane sayı giriniz: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        if(a[j]%2==0)
        k++;
    }
    printf("dizideki çift sayı %d tanedir",k);
    return 0;
}