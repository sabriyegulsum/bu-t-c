#include <stdio.h>
int all_add(int a,int b)
{
    int c=10;
    return (a+b+c);
}
int main()
{
    int x,y;
    
    scanf("%d%d",&x,&y);
    printf("%d",all_add(x,y));

    return 0;
}
