#include <stdio.h>
int main()
{
    int i=0,gecici=0,k=0;
    char a[100];
    gets(a);
    for(i=0; a[i]!='\0';i++)
    k++;
    k=k-1;
    for(i=0; i<k/2; i++)
    {
        gecici=a[i];
        a[i]=a[k-i];
        a[k-i]=gecici;
    }
    puts(a);

    return 0;

}