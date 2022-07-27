#include <stdio.h>

#include <string.h>

int main ()
// kod if ve den sonra hata veriyor.

{
    char A[100],a;
    int counter=0,i;

    printf("bir cümle yazınız: ");

    gets(A);

    for(i=0 ; A[i]!='\0'; i++)
    {
        
     if(A[i]==a && A[i+1]==' ')
     counter++;
    }
    printf("a ile biten kelime sayısı %d",counter);
    return 0;
}