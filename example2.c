#include <stdio.h>
//seçtiğimiz harften kaç tane ve kaçıncı sırada olduğunu yazan program
int main()
{
    char A[100],n;
    int i,k=0;
    printf("bir cümle yazınız");
    gets(A);
    printf("sayılmasını istediğiniz harfi giriniz");
    scanf("%c",&n);
    i=0;
    while(A[i]!='\0')
    {
        
        if(A[i]==n)
        {
        printf("%d.sıra \n",i+1);
        k++;
        }

        i++;

    }
   printf("%d tane %c vardır",k,n);
 
    return 0;
}