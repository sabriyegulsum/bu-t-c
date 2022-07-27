#include <stdio.h>

int main()
{
    //1.dönem final sorusu
    int i,j,toplam=0,ort=0;
    int max=0,number=0;
    int A[4][5] = {1,67,76,55,0,2,37,79,76,0,3,56,68,57,0,4,66,89,65,0};
    for(i=0; i<4; i++)
    {
        for(j=1; j<4; j++)
        {
            toplam+=A[i][j];
        }
        ort=toplam/3;
        A[i][4]=ort;

        
        if(ort>max)
        {
            max=ort;
            number=i+1;
        }
        printf("%d.öğrencinin ortalaması: %d\n",i+1,A[i][4]);
        ort=0;
        toplam=0;
        
    }
    printf("%d.öğrenci en yüksek puanı almıştır.Ortalaması: %d",number,max);

    return 0;
    //4.öğrencinin ortalamasını sıfır yazdırıyo

}