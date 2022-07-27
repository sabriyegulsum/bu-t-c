#include <stdio.h>
#include <math.h>
int main()
{
    int i,ort,toplam=0,n;
    float D[100],HO=1,carpim=1.0,H=0.0;
    printf("dizinin eleman sayısını giriniz: ");
    scanf("%d",&n);
    printf("dizinin elemanlarını giriniz: ");
    for(i=0;i<n;i++)
    {
        scanf("%f",&D[i]);
        toplam+=D[i];
        carpim*=D[i];
        H+=1/D[i];
    }
    ort=toplam/n;
    carpim=pow(carpim,1.0/n);
    HO=n/H;
    printf("aritmetik ortalama: %d\ngeometrik ortalama: %f\nharmonik ortalama: %f ",ort,carpim,HO);
    return 0;
}