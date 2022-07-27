#include <stdio.h>
#include<math.h>
int main()
{
    int i,N,A[100];
    float toplam=0.0,ort=1.0,c;
    printf("eleman sayısı giriniz: ");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        printf("A[%d]=",i);
        scanf("%d",&A[i]);
        toplam+=A[i];
    }
    ort=toplam/N;
    toplam=0.0;
    for(i=0;i<N;i++)
    {
        toplam+=pow(A[i]-ort,2);
    }
    c=sqrt(toplam/(N-1));
    printf("standart sapma: %f",c);
    return 0;
}