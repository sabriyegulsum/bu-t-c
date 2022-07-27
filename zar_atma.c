#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,n,a,b,c,d,e,f;
    srand(time(NULL));
    for(i=1;i<=10;i++)
    {
    n=rand ()% 6+1;
    //printf("%d\n",n);
    if(n==1)
    a+=1;
    else if(n==2)
    b+=1;
    else if(n==3)
    c+=1;
    else if(n==4)
    d+=1;
    else if(n==5)
    e+=1;
    else
    f+=1;
    }
    printf("%d tane 1\n%d tane 2\n%d tane 3\n%d tane 4\n%d tane 5\n%d tane 6\n",a,b,c,d,e,f);
    return 0;
}