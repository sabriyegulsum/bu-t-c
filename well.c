#include <stdio.h>
int uzunluk_bul(char []);
void ters_cevir(char[]);


int main(void)
{
    char a[100];
    int metin;
    printf("bir metin giriniz");
    gets(a);
    uzunluk_bul(a);
    printf("%d",uzunluk_bul(a));
    ters_cevir(a);
    printf("\n");
    puts(a);
    return 0;
}

int uzunluk_bul(char b[])
{
    int i,uzunluk=0;
    for(i=0; b[i]!='\0'; i++)
    {
        uzunluk++;
    }
    return uzunluk;
}

void ters_cevir(char c[])
{
    int gecici,j,uzunluk;
    uzunluk=uzunluk_bul(c);
    for(j=0; j<uzunluk/2;j++)
    {
        gecici=c[j];
        c[j]=c[uzunluk-j-1];
        c[uzunluk-j-1]=gecici;

    }
}