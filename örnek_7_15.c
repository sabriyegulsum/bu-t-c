#include <stdio.h>
int main()
{
    int A[100],i,n;
    printf("lütfen öğrenci sayısını giriniz: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]<50)
        printf("%d.öğrenci KALDI\n",i+1);
        if(A[i]>=50)
        printf("%d.öğrenci GEÇTİ\n",i+1);
    }
    return 0;
}