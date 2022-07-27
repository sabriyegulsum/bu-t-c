#include <stdio.h>
//#include <string.h>
int main ()
{
    int i;
    char metin[100],h[1]={'a'};
    
    gets(metin);
    for (i=0; metin[i]!='\0'; i++)
    {
        if (metin[i]=='A')
            metin[i]=h[0];
    }
    puts(metin);
   return 0;
}