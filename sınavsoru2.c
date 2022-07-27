#include <stdio.h>
int ters_cevir(int i,int j);
int main()
{
    int A[100],i=0,t,j,n;
    printf("eleman sayısını giriniz: ");
    scanf("%d",&n);
    for(j=0; j<n;j++)
    scanf("%d",&A[j]);
    
    }
    for(j=0;j<n;j++)
    printf("%d\n",A[j]);
    return 0;   
}
    int ters_cevir(int n,int j)
    {
    for(j=0; j<n/2; j++)
    {
    t=A[n-j-1];
    A[n-j-1]=A[j];
    A[j]=t;
    return i,j;
    }