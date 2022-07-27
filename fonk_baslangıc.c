//birden n e kadar olan sayıların toplamını bulanfonksiyonu
#include <stdio.h>
int toplam (int x);
int main()
{
    int n;
    printf("bir sayı giriniz: ");
    scanf("%d",&n);
    printf("%d",toplam(n));
    return 0;
}
int toplam(int x)
{
    int top=0,i;
    for(i=0;i<=x;i++)
        top+=i;
    return top;

}