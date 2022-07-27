#include <stdio.h>

int fonk(int a[],int 10);
int main()
{
    int b[10];
    int i;
    for(i=0;i<10;i++)
    scanf("%d",&b[i]);
    printf("max: %d\nmax2: %d",fonf(max,max2));
    return 0;
}
int fonk(int a[],int 10)
{
    int j,k,max,max2;
    max=a[0];
    max2=a[0];
    for(j=0;j<10;j++)
    {
        if(max<a[j])
        max=a[j];
        
    }
    for(k=0;k<10;k++)
    {
        if(max2<a[k]&&a[k]<max)
        max2=a[k];
    }
    return max,max2;
}