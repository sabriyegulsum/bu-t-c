#include <stdio.h>
int main()
{
    int N[10];
    int i,j,ort,max,min,toplam=0,yeni;
    printf("öğrencilerin notlarını giriniz");
    for(i=0;i<10;i++)
    {
        scanf("%d",&N[i]);
    }
    max=N[0];
    min=N[0];
    for(i=0;i<10;i++)
    {
        if(N[i]<min)
        min=N[i];
        if(N[i]>max)
        max=N[i];
        toplam+=N[i];
    }
    printf("yeni not giriniz: ");
    scanf("%d",&yeni);
    for(j=0;j<10;j++)
    {
        if(yeni==N[j])
        {
        printf("bu not girilmiştir\n");
        break;
        }
    }

    if(j==10)
    printf("bu not ilk defa girildi\n");
        
    ort=toplam/10;
    printf("notların ortalaması: %d\nen yüksek not: %d\nen düşük not: %d",ort,max,min);
    return 0;
}