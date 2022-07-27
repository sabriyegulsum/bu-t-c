#include <stdio.h>
int main()
{
    int i,n;
    int A[]={1,3,5,7,9};
    scanf("%d",&n);
    if(n<A[i])
    printf(" %d ",n);
    for( i=0;i<5;i++)
    {
        printf(" %d ",A[i]);
        if(n>A[i] && n<A[i+1])
        printf(" %d ",n);
        
        
    }
    
    if(n>A[i-1])
    printf(" %d ",n);
    return 0; 
}