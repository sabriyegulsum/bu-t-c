#include <stdio.h>
#include <string.h>
int main()
{
    char metin[100];
    int i;
    int n=0;
    printf("küçük harflerle metin giriniz:");
    gets(metin);
    for(i=0 ; metin[i]!='\0'; i++)
    {
        if(metin[i]=='\0')
        i-=1;
    }
    n=i;
    for(i=0; i< n+1; i++)
    {
        if(metin[i]>=97&&metin[i]<=122)
        metin[i]-=32;
    } 

    puts(metin);
    
    return 0;

   
}