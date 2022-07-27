#include <stdio.h>

int main (void)
{
    int i,j,A[4][4]={67,76,55,0,34,79,76,0,56,68,57,0,66,89,65,0};
    int toplam=0,ort=0,max=0,number=0;

    for(i=0; i<4; i++)
    {
        for(j=0;j<3; j++) // üçe kadar olmasının sebebi sonda ortalama var onu hesaba katmam
        {
            toplam+=A[i][j];
        }
        ort=toplam/3;
       
        if(ort>max) 
        {
            max=ort;
            number=i+1;
        }
         A[i][3]=ort;
        printf("%d nolu öğrencinin ortalaması: %d\n",i+1,A[i][3]); //böyle yaparak matrise dahil etmemiş oldum:)
        ort=0;
        toplam=0;
    }
    printf("en yüksek notu alan öğrenci %d nolu %d puandır",number,max);
    return 0;
}