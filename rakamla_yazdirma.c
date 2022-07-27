#include <stdio.h>
#include <string.h>
int main()
{
    char A[10]={"sıfır","bir","iki","üc","dort","bes","altı","yedi","sekiz","dokuz"};
    int i,n;
    printf("-9 ile 9 arasında bir sayı giriniz");
    scanf("%d",&n);
    if(n<0)
    {
    printf("eksi ");
    printf("%c",A[-n]);
    }
    if(n>=0)
    printf("%c",A[n]);
    return 0;
}