#include <stdio.h>

#include <string.h>
int fonk (char[]);
int main ()
{
    char cumle[100];
    gets(cumle);
    fonk(cumle);
    printf("%d",fonk(cumle));
    return 0;
}    
int fonk (char a[])
{
    int i;
    while (a[i]!='\0')
        i++;
    return i;
    
}
