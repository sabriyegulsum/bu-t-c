#include <stdio.h>
int main(void)
{
    int i,j,a[5][4]={20,30,67,0,48,56,38,0,100,5,100,0,12,48,77,0,58,66,71,0};
    int ort=0,toplam=0,max=0,number=0;
    for(i=0;i<5; i++)
    {
        for(j=0;j<4;j++)
        {
            toplam+=a[i][j];

        }
        ort=toplam/3;
        a[i][3]=ort;
        if(ort>max)
        {
            max=ort;
            number=i+1;
        }
        
        printf("%d .öğrencinin ortalaması %d dir\n",i+1,a[i][3]);
        ort=0;toplam=0;
    }
    printf("%d.öğrenci %d puanla en yüksek ortalamayı almıştır",number,max);
    return 0;
}