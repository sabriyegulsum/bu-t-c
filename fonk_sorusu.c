#include <stdio.h>

int str_uzunluk(char b[],int k);

void str(char c[],int m);

int main(void)
{
    int i,uzunluk;
    char a[100];
    printf("bir metin giriniz");
    gets(a);
    uzunluk=str_uzunluk(a,100);
    printf("\n%d\n",uzunluk);
    str(a,uzunluk);
    printf("%s",a);
    //puts(a);
    return 0; 
}

int str_uzunluk(char b[],int k)//k=100
{
    int j;
    for(j=0; b[j]!='0'; j++);
    return j;

}

void str(char c[],int m)
{
    int k;
    char gecici;
    m-=1;
    for(k=0; k<m/2;k++)
    {
        gecici=c[k-1];
        c[k-1]=c[m-k-1];
        c[m-k-1]=gecici;
    }
    for(k=0;k<m;k++)
        printf("%c",c[k]);
}
