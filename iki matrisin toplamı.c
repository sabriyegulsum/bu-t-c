#include <stdio.h>
#define SAT 2
#define SUT 3
int main()
{
    int A[SAT][SUT]={5,3,7,0,1,2};
    int B[SAT][SUT]={1,2,3,4,5,6};
    int C;
    puts("A Matrisi:");
    for(int i=0;i<SAT;i++)
    {
        for(int j=0;j<SUT; j++)
        printf("%4d",A[i][j]);
        printf("\n");
    }
    puts("B Matrisi:");
        for(i=0;i<SAT;i++)
    {
        for(j=0;j<SUT;j++)
        printf("%4d",B[i][j]);
        printf("\n");
    }
    puts("C Matrisi: ");
    for(i=0;i<SAT;i++)
    {
        for(j=0;j<SUT;j++)
        printf("%4d",A[i][j]+B[i][j]);
        printf("\n");
    }
    return 0;
}