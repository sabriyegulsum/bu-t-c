#include <stdio.h>

int main()
{
    int satır,sutun,i,j,toplam=0,ort=0;
    printf("öğrenci sayısını yazınız: ");
    scanf("%d",&satır);
    printf("ders sayısını yazınız: ");
    scanf("%d",&sutun);
    
    int A[satır][sutun];
    printf("öğrencilerin notlarını birinci öğrenciden başlayıp sırasıyla giriniz: ");
    for(i=0; i<satır; i++)
    {
        for(j=0; j<sutun; j++)
        {
            scanf("%d",&A[satır][sutun]);
        }
    }
    for(i=0; i<satır; i++)
    {
        for(j=1; j<sutun; j++)
        {
            toplam+=A[i][j];
        }
        ort=toplam/(sutun-1);
        printf("\n%d. öğrencinin not ortalaması:%d\n",i+1,ort);
        toplam=0;
        ort=0;
    }
    return 0;
}