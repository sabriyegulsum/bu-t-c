#include<stdio.h>

int main()
{
    int A[10],B[10],C[10],i,toplam,ort,b=0,c=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&A[i]);
        toplam+=A[i];
    }
    ort=toplam/10;
    printf("ort:%d ",ort);
    for(i=0;i<10;i++)
    {
        if(A[i]<ort)
        {
        B[i]=A[i];
        b++;
        }
        else
        {
        C[i]=A[i];
        c++;
        }
    }
    printf("küçük %d, büyük %d",b,c);
    return 0;
    

}