#include <stdio.h>
void fonk(int x,int y);
int main(void)
{
    int x,y;
    printf("bir sayı giriniz: ");
    scanf("%d",&x);
    printf("bir sayı daha giriniz: ");
    scanf("%d",&y);
    fonk(x,y);
    return 0;
}

void fonk(int x,int y)
{
    int z=1,i;
    for(i=0;z!=0;i++)
    {
        z=x%y;
        x=y;
        y=z;
    }
    printf("%d ",x);

}
