#include <stdio.h>
int main(void)
{
    int x,y,z=1,i=0;
    printf("İki sayı giriniz:");
    scanf("%d%d",&x,&y);
    for(i=0;z!=0;i++)
    {
        z=x%y; 
        if(z==0)
            break;
        x=y; 
        y=z;
    }
    printf("%d",y);
    return 0;
}