#include <stdio.h>
int main ()
{
   int toplam=0;
    int M[3][3]={1,2,3,1,2,3,1,2,3};

    for(int i=0;i<=2;i++)
    {
        toplam=0;
    for(int j=0;j<=2;j++)
    {
    
        toplam+=M[i][j];
    }
        printf("%d\n",toplam);
    }
    return 0;
    
}