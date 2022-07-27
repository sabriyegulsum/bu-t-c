#include <stdio.h>

int main()
{
    int A[5],B[5],i;
    for(i=0;i<5;i++)
    scanf("%d",&A[i]);
    for(i=0;i<5;i++)
    {
        B[i]=(-1)*A[4-i];
        printf("%d",B[i]);
    }
    return 0;
}