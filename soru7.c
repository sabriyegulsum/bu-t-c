#include <stdio.h>

int main()
{
    char a[100],i;
    printf("bir cümle yazınız: ");
    gets(a);
    a[0]-=32;
    for(i=0;i<100;i++)
    {
        if(a[i]==' ')
        a[i+1]=a[i+1]-32;
    }
    puts(a);
    return 0;
}