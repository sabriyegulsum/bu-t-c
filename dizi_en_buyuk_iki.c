#include <stdio.h>
#define SIZE 5
//en büyük iki sayıyı bulmak için ilk max ve min i sondaki elemana eşitle sonra ilk max bul sonra 
int main()
{
    int a[SIZE];
    int i,j,k,max,max2;
    for(i=0;i<SIZE;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[4];
    max2=a[4];
    for(j=0;j<SIZE;j++)
    {
        if(a[j]>=max)
        max=a[j];
    }
    for(k=0;k<SIZE;k++)
    {
        if(a[k]>max2 && a[k]<max)
        max2=a[k];
    }
    printf("dizideki en büyük iki eleman: %d ve %d",max,max2);
    return 0;
} 