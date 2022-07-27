#include <stdio.h>

int maximum (int x,int y,int z);
int main()
{
    int number1,number2,number3;
    printf("üç tane sayı giriniz");
    scanf("%d%d%d",&number1,&number2,&number3);
    printf("maximum: %d",maximum(number1,number2,number3));
    return 0;
}

int maximum(int x, int y, int z)
{
    int max=x;
    if(y>max) max=y;
    if(z>max) max=z;
    return max;
}