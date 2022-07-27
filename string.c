#include <stdio.h>
int main()
{
    char M[]="H";
    for(int i=0;i<=3;i++)
    {
        printf("\n%-5s %5s",M,M);
    }
    
     printf("\n");
    printf("H H H H H H");
   

    for(int j=0; j<=3;j++)

    {
        printf("\n%-5s %5s",M,M);
    }
    printf("\n");
    

    return 0;
}