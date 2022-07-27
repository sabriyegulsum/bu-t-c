#include <stdio.h>
int main()
{
int max,min;
int M[3][3]={ {23,45,27,325,65,45,12,1,37};
    max=M[0][0];
    min=M[0][0];
    for(int i=0;i<=2;i++)
    {
        for(int j=0;j<=2;j++)
        {
            if(M[i][j]<min)
            min=M[i][j];
            if(M[i][j]>max)
            max=M[i][j];
        }
    }
    printf("max= %d\nmin= %d",max,min);
    return 0;
}
    

