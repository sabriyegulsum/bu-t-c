#include <stdio.h>

int main ()
{
    int a=10;
    printf("a=%d\n",a);
    {
        int a=20;
        printf("a=%d\n",a);
    }
    printf("a=%d",a);
    return 0;
}
