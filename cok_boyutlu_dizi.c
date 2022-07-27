#include <stdio.h>

int main()
{
    int toplam=0;
    int M[2][2]={ {1,2},{1,2 } } ;

    for(int i=0; i<=1;i++)
    {
        for(int j=0; j<=1;j++)
        {
        printf("M[%d][%d]= %d\n",i,j,M[i][j]);
        toplam+=M[i][j];
    }
    }
   printf("%d",toplam);
    return 0;
}