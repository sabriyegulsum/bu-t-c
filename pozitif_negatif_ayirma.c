#include <stdio.h>
int main()
{
    int A[100],i,B[100],C[100],n=0,p=0,N;
    printf("dizinin eleman sayısını giriniz: ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>=0)
        {
        B[p]=A[i];
        p++;
        }
        if(A[i]<0)
        {
            C[n]=A[i];
            n++;
        }
    }
    printf("B dizisi: ");
    for(i=0;i<p;i++)
    printf("%d ",B[i]);
    printf("\n");
     printf("C dizisi: ");
    for(i=0;i<n;i++)
     printf("%d ",C[i]);

     return 0;
}