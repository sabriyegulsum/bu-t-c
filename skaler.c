#include <stdio.h>
int main()
{
    int A[100],B[100],C[100],i,toplam=0,n;
    printf("A ve B dizisi için eleman sayısı giriniz: ");
    scanf("%d",&n);
    printf("A dizisinin elemanlarını giriniz:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("B dizisinin elemanlarını giriniz:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }
    for(i=0;i<n;i++)
    {
        C[i]=A[i]*B[i];
        toplam+=C[i];
    }
    printf("skaler çarpım: %d\n",toplam);
    return 0;
}