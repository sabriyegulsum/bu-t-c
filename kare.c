#include <stdio.h>
int main()
{
    int kare=1,i,j;
    int A[10];


    for(i=0;i<10;i++)
    {

    scanf("%d",&A[i]);
    if(A[i]==-1)
    break;

    }


    for(j=0;j <i;j++)
    {

        kare=A[j]*A[j];
        printf("%d\n",kare);
        kare=1;

        
    }
    return 0;
}