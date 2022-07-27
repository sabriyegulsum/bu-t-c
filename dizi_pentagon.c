#include <stdio.h>
int main()
{
    int P[100];
    int i;
    for(i=0;i<=100;i++)
    {
        P[i]=i*(3*i-1)/2;
        if(P[i]<100)
        printf("%d\n",P[i]);
    }
    return 0;
}
    