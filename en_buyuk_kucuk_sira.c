#include <stdio.h>
int main()
{
    int A[100],i,max,min,n,counter=0,counter2=0;
    printf("dizinin eleman sayısını giriniz: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%d",&A[i]);
    }
    max=A[0];
    min=A[0];

    for(i=0;i<n;i++)
    {
        if(A[i]<min)
        {
        min=A[i];
        counter=i+1;
        }
        if(A[i]>max)
        {
        max=A[i];
        counter2=i+1;
        }
    }
    printf("en büyük: %d.sıradaki %d sayısıdır\nen küçük: %d.sıradaki %d sayısıdır",counter2,max,counter,min);
    return 0;
}