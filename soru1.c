#include <stdio.h>
int main()
{
    int a[10],i,j,k,counter=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<10;j++)
    {
        for(k=0;k<10;k++)
        {
           if(a[j]==a[k])
           counter++;
        }
        printf("%d. elamandan %d tane var\n",j+1,counter);
        counter=0;
    }
    return 0;
}    