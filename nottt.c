#include <stdio.h>
int main()
{
    int i,j,A[10][4];
    printf("her öğrencinin vize ve final notarını giriniz\n");
    for(i=0;i<10;i++)
    {
       
        for(j=0;j<2;j++)
        {
            if(j==0)
             printf("%d.öğrencinin notu: \n",i+1);
             scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<10;i++)
    {
        A[i][2]=A[i][0]*0.4+A[i][1];
        printf("%d.öğrencinin ortalaması: %d\n",i+1,A[i][2]);
    }
    for(i=0;i<10;i++)
    {
        if(A[i][2]<50)
        printf("%d.öğrenci kaldı\n",i+1);
        else
        printf("%d.öğrenci geçti\n",i+1);v
    }
    return 0;
}