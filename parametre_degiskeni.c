#include <stdio.h>
int a =10;
void fonk(int a)
{
    a = 40;
    printf("%d\n",a);
}
int main()
{
    printf("%d\n",a);
    fonk(a);
    printf("%d\n",a);
    return 0;
}