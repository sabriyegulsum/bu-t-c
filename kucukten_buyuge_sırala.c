#include <stdio.h>
int main()
{
    int A[100],i,n,j,kucuk;
    printf("dizinin eleman sayısını giriniz: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(A[i]<=A[j])
            {
            kucuk=A[i];
            A[i]=A[j];
            A[j]=kucuk;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",A[i]);
   return 0;
}
