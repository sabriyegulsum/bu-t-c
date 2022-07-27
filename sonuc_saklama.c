#include <stdio.h>
int main()
{
    int i,j;
    int sonuc_tablosu[2][2];
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            printf("\n%d. öğrencinin %d. sınavının sonucu: ",i+1,j+1);
            scanf("%d",&sonuc_tablosu[i][j]);
        }
    }
    return 0;
}