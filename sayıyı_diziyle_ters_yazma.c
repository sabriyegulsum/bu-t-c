#include <stdio.h>
int main()
{
    int i=0,ison=0,A[5],sayi,basamak;
    printf("bir sayı giriniz");
    scanf("%d",&sayi);

    while(sayi>0)
    {
        basamak=sayi%10;
        A[i]=basamak;
        sayi=sayi/10;
        i++;
    }
    i=i-1;
    ison=i;
    for(i=0; i<=ison; i++)
    {
        printf("%d",A[i]);
    }
    return 0;

}