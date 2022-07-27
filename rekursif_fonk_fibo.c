#include <stdio.h>
int fibo(int a)
{
    if(a==0)
    {
        return 0;
    }
    else if(a==1)
        {
            return 1;
        }
        else
    return fibo(a-2)+fibo(a-1);
}
int main()
{
    int x;
    printf("lütfen bir sayı giriniz");
    scanf("%d",&x);
    printf("%d",fibo(x));
    return 0;
}