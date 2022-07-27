#include <stdio.h>
void alfabetik_sira(char[],int);
int main(void)
{
    int i,u=0;
    char a[100];
    printf("bir metin girininz");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        u++;
    alfabetik_sira(a,u);
    return 0;
    
}

void alfabetik_sira(char b[], int x)
{
    int i,c;
    char gecici;
    for(i=0;i<x;i++)
    {
        for(c=i;c<x;c++)
        {
            if(b[i]>b[c])//buyuktur yonu degistirdim
            {
                gecici=b[c];
                b[c]=b[i];
                b[i]=gecici;
            }
            printf("%d  %d  %s\n",i,c,b);
            
        }
    }
    printf("%s",b);
}