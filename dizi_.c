#include <stdio.h>
#define SIZE 3
//girilen dizide max ı ve min i bulan program
int main ()
{
    int i,j,a[SIZE];
    
    printf("3 tane sayı giriniz");
    for(j=0;j<SIZE;j++)
    {
        scanf("%d",&a[j]);
    }
    int max=a[0],min=a[0];
    for(i=0;i<SIZE;i++)
    {
        if(a[i]<=min)
        min=a[i];
        if(a[i]>=max)
        max=a[i];
    }
    printf("girilen sayılardan en büyüğü: %d\ngirilen sayılardan en küçüğü: %d",max,min);
    return 0;
}
//dönüp fonksiyonla yazmalısın