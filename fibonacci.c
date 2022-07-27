#include <stdio.h>
int main()
{
    int i,sayi,F[100];
    F[0]=1;
    F[1]=1;
    printf("dizinin sayısını giriniz: ");
    scanf("%d",&sayi);
    for(i=0;i<sayi-2;i++)
    {
        F[i+2]=F[i+1]+F[i];
    }
    for(i=0;i<sayi;i++)
    {
        printf(" %d ",F[i]);
    }
    return 0;
}