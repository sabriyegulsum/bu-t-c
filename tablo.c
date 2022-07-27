#include <stdio.h>
int main()
{
    int p,i,j,k;
    printf("         KASIM AYI   ARALIK AYI     OCAK AYI");

    for(p=1,i=3,j=6,k=12;p<=4,i<=6,j<=14,k<=44;p++,i++, j=j+2,k=k+10)
    {
        printf("\n%d.HAFTA %5d         %5d            %3d",p,i,j,k);
        printf("\n");
    }
    return 0;
}