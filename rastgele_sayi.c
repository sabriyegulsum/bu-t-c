#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,n;
    srand(time(NULL));

    printf("Ten random numbers in[1,100]\n");
    for(i=1;i<=10;i++)
    {
        n=rand() % 10+1;
    //- yazarsan 0- alır yada +1 yazarsan sıfırı almaz
        printf("%d\n",n);
    }
    return 0;
}