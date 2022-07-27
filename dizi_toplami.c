#include <stdio.h>
int main ()
{
    int i,N,A[100],B[100],C[100];
    printf("dizideki eleman sayısını giriniz");
    scanf("%d",&N);
    for(i=0; i<N; i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
    }
    i=0;
    for(i=0; i<N; i++)
    {
        printf("B[%d]=",i);
        scanf("%d",&B[i]);
    }
    i=0;
    for(i=0; i<N; i++)
    {
        C[i]=A[i]+B[i];
        printf("C[%d]=%d\n",i,C[i]);
    }
    return 0;
}
