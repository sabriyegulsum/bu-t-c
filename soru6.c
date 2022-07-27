#include <stdio.h>

int main()
{
    int A[100],i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        A[i]=1;
        else
        A[i]=0;
        printf("%d\n",A[i]);
    }
    return 0;
}