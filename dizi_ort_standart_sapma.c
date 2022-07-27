#include <stdio.h>
#include <math.h>
int main()
{
    int i,A[10];
    float toplam=0.0,ort=0.0,standart_sapma=0.0;
    printf("dizinin elemanlarını giriniz");
    for(i=0; i<10; i++)
    {
        scanf("%d",&A[i]);
        toplam+=A[i];
    }
    ort=toplam/10;
    for(toplam=0, i=0; i<10; i++)
        toplam=pow(A[i]-ort,2.0);

        standart_sapma=toplam/9;
        printf("ortalama= %f\nstandart sapma= %f",ort,standart_sapma);
        return 0; 
}