#include <stdio.h>

#include <string.h>
int main()
{
    int i;
    char metin[100],H[1]={'A'};
    char a;
    printf("bir metin giriniz");
    gets(metin);
    for(i=0;metin[i]!='\0';i++)
    {
        if(metin[i]==a)
        metin[i]=H[0];
    }
    puts(metin);
    return 0;
}