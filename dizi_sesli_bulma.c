#include <stdio.h>
int main()
{
    char M[40];
    char kucuk[10]="aeuüıi";
    int k=0,i,n=0;
    printf("bir kelime yazınız :");
    gets(M);
    for(i=0;M[i]!='\0'; i++)
    {
        for(n=0;kucuk[n]!='\0';n++)
        {
        if(M[i]==kucuk[n])
        k++;
        }
    }
    printf("bu kelimedeki sesli harf sayısı: %d",k);
    return 0;
}