#include <stdio.h>

int fonk(int b[][],5);
int main()
{
    int i,a[5]={1,2,3,4,5};
    /*for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }*/
    printf("normal dizim: \n");
    for(i=0;i<5;i++)
    {
        print("%3d",a[i]);
    }
        print("değişen dizim:\n ")
    fonk(a,5);
    for(i=0;i<5;i++)
    printf("%3d",&a[i]);
    return 0;
}
int fonk(int b[],5)
{
    int j;
    for(j=0;j<5;j++)
    b[j]*=2;
    return b[j];
}