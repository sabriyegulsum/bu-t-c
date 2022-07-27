#include <stdio.h>
int main()
{
    int M[10];
    int i,j,k,temp,m;
    for(i=0;i<10;i++)
    {
        scanf("%d",&M[i]);
    }
    for(j=0;j<10;j++)
    {
        printf("%d",M[j]);
        if(j!=9)
        printf(",");

    }
    for(k=0;k<=5;k++)// tersten yazdırma formülüm 0 dan başla dizinin yarısına eşit olana kadar uygula
    {
        temp=M[i-k-1];
        M[i-k-1]=M[k];
        M[k]=temp;
       
    }
    printf("=>");
    for(m=0;m<10;m++)
    {
        printf("%d",M[m]);
        if(m!=9)
        printf(",");
    }
    return 0;
}

