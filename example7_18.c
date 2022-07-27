#include <stdio.h>
#include <string.h>
//şeçtiğim harften kelimede kaç tane var onu hesaplayan program
int main()
{
    char A[100],n;
    int i,k=0;
    printf("bir cümle yazınız");
    gets(A);
    printf("sayılmasını istediğiniz harfi giriniz");
    scanf("%c",n);
    i=0;
    while(A[i]!='\0')
    {
        
        if(A[i]==n)
        {
        printf("%d.sıra ",i+1);
        k++;
        }

        i++;

    }
   printf("%d tane %d vardır",k,n);
 
    return 0;
}