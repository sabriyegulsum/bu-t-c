#include <stdio.h>
int main()
{
    int a[2][4]={5,3,7,0,1,2};
    int i,j,toplam=0;
    puts("A MATRİSİ: ");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<2; i++)
        {
        toplam+=a[i][j];
        }
        printf("%4d",toplam);
        toplam=0;
    }
    return 0;
}