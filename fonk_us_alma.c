#include <stdio.h>

double us_al(double x, double y);

int main()
{
    double a,b;
    printf("taban ve üs değerlerini girinz");
    scanf("%lf%lf",&a,&b);
    printf("Sonuç: %.3f",us_al(a,b));
    return 0;
}

double us_al(double x, double y)
{
    int sayac;
    double sonuc=1.0;
    for(sayac=1; sayac<=y; sayac++)
    {
        sonuc*=x;
    }
    return sonuc;
}
