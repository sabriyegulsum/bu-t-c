#include <stdio.h>

int main()
{
    int i=0;
    char harf;
    printf("büyük harf giriniz: ");
    scanf("%c",&harf);
    harf+=32;
    printf("%c",harf);
    return 0;
}
//buyuk_harfi_kucuge_cevirme