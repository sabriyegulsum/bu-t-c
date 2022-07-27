#include <stdio.h>
int main ()
{
    char a;
    printf("kucuk harf giriniz: ");
    scanf("%c",&a);
    a-=32;
    printf("buyuk harf: %c\n",a);
   return 0;
}