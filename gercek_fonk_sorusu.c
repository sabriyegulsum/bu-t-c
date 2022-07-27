#include <stdio.h>

void str_uzunluk(char b[],int k);

void str(char c[],int m);

int main(void)
{
    int i;
    char a[100];
    printf("bir metin giriniz");
    gets(a);
    str_uzunluk(a,100);
    str(a,100);
    puts(a);
    return 0;
}

void str_uzunluk(char b[],int k)
{
    int j;
    for(j=0; b[j]!=k; j++)
    {
        k++;
    }
    printf("%d",k);
}

void str(char c[],int m)
{
    int k;
    char gecici;
    for(k=0; k<m/2;k++)
    {
        gecici=c[k-1];
        c[k-1]=c[m-k-1];
        c[k-m-1]=gecici;
    }
}
