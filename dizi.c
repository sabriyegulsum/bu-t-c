#include <stdio.h>
#define A 8
int main()
{
    float toplam=0.0,ort=0.0,a[A];
    printf("sekiz tane sayı giriniz: ");
    for(int i=0;i<A;i++)
    {
        scanf("%f",&a[i]);
        toplam+=a[i]; 
    }
    ort=toplam/A;
    printf("girilen sayıların ortalaması: %4f",ort);
    return 0;
}