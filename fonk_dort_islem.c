#include <stdio.h>
//sonsuz döngüye giriyo

int toplama(int a, int b);
int cikarma(int a, int b);
int carpma(int a, int b);
float bolme(float a, float b);

int main()
{
    int secim,s1,s2;
    printf("1-TOPLA\n2-ÇIKAR\n3-ÇARP\n4-BÖL\n");
    printf("Lütfen bir seçim yapınız");
    scanf("%d",&secim);
    printf("Lütfen iki sayı giriniz");
    scanf("%d%d",&s1,&s2);

    while(1)
    {
        if(secim==1)
        {
            printf("%d",toplama(s1,s2));
            break;
        }
        
        else if(secim==2)
        {
            printf("%d",cikarma(s1,s2));
            break;
            }
        else if(secim==3)
        {
            printf("%d",carpma(s1,s2));
            break;
            }
        else if(secim==4)
        {
            printf("%f",bolme(s1,s2));
            break;
        }    
        else if(secim==5)
            break;
    }
    return 0;
}
int toplama(int a, int b)
{
    return a+b;
}
int cikarma(int a, int b)
{
    return a-b;
}
int carpma(int a, int b)
{
    return a*b;
}
float bolme(float a, float b)
{
    return a/b;
}