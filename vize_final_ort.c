//10 öğrencinin vize ve final notlarını alarak ortalamalarını hesaplama
#include <stdio.h>
int main()
{
    int V[10],F[10],ORT[10],i;
    printf("bütün ögrencilerin vize notlarını  giriniz\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&V[i]);
        V[i]*=0.4;
    }
    printf("final notlarını giriniz");
    for(i=0;i<10;i++)
    {
        scanf("%d",&F[i]);
        F[i]*=0.6;
    }
    for(i=0;i<10;i++)
    {
        ORT[i]=V[i]+F[i];
        printf("%d öğrencinin ortalaması: %d\n",i,ORT[i]);
    }
    return 0;
}