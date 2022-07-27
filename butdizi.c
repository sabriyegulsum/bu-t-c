#include <stdio.h>
#define MAX_OGR_SAYISI 5
int main()
{
    int notlar[MAX_OGR_SAYISI]={98,87,35,15,51};
     /*notlar[0]=98;
     notlar[1]=87;
     notlar[2]=35;
     notlar[3]=14;
     notlar[4]=5;*/
    for(int i=0;i<=4;i++)
    {
        printf("not %d= %d\n",i+1,notlar[i]);
    } 
    return 0;
    }
    
    