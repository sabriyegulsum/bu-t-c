#include <stdio.h>
#define SAT 1
#define SUT 3
int main()
{
    int i,j,k;
    int A[SAT][SUT],B[SAT][SUT],C[SAT][SUT];
    for(i=0;i<SAT;i++)
    {
        for(j=0;j<SUT;j++)
        {
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<SAT;i++)
    {
        for(j=0;j<SUT;j++)
        {
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<SAT;i++)
    {
        for(j=0;j<SUT;j++)
        {
            C[i][j]=A[i][j]+B[i][j];
            printf("%d ",C[i][j]);
        }
    }
    return 0;
}