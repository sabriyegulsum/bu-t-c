#include <stdio.h>
int main()
{
    int j,t,i,D[5],A[5],B[5],C[5];
    for(i=0;i<5;i++)
    {
        scanf("%d %d %d",&A[i],&B[i],&C[i]);
        D[i]=A[i]+B[i]+C[i];
    }
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(D[j]>=D[i])
            {
                t=D[i];
                D[i]=D[j];
                D[j]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    printf("%d\n",D[i]);
    return 0;
}