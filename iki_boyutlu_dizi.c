#include <stdio.h>
int main()
{
    int toplam=0;
    int M[2][2]={ {1,2},{1,2 } } ;

    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2;j++)
        {
        printf("%d  ",M[i][j]);
        toplam+=M[i][j];
    }
    printf("\n");
    }
   printf("%d",toplam);
    return 0;
}