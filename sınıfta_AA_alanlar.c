#include <stdio.h>

// AA alan öğrencilerin sayısı

int main()
{
    int i,ogr_sayi,AA;
    printf("öğrenci sayısını giriniz:");
    scanf("%d",&ogr_sayi);
    int A[ogr_sayi];
    printf("\nöğrencilerin notlarını giriniz:");
    for(i=0; i<ogr_sayi; i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>=85)
            AA++;
    }
    printf("AA alan öğrenci sayısı: %d\n",AA);
    return 0;

}