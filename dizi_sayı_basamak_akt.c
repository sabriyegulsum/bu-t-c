#include <stdio.h>

int main()
{
    int i=0,basamak,sayi,A[5];
    scanf("%d",&sayi);
    while(sayi>0)
    {
        basamak=sayi%10;
        A[i]=basamak;
        i++;    
        sayi=sayi/10;
    }
        i=i-1;
        for(;i>=0;i--) //OLDUĞU SÜRECE
        {
            printf("%d",A[i]);
            
        }
        return 0;
}