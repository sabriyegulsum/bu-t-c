#include <stdio.h>
int main()
{
    char M[40],temp;
    int n,i;
    printf("bir şeyler yazınız");
    gets(M);
    for(n=0;M[n]!='\0';n++);
    for(i=0;i<=n/2;i++)
    {
        temp=M[n-i-1];
        M[n-i-1]=M[i];
        M[i]=temp;

    }
    printf("dizinin tersi %s",M);
    return 0;
}