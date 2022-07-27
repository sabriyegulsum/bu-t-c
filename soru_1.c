#include <stdio.h>
int main()
{
    int i,A[10];
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,k=0,j=0;
    printf("lütfen 10 haneli bir sayı giriniz:");
    scanf("%d",&A);
    for(i=0;i<10;i++)
    {
        if(A[i]==0)
        a++;
        if(A[i]==1)
        b++;
         if(A[i]==2)
        c++;
         if(A[i]==3)
        d++;
         if(A[i]==4)
        e++;
         if(A[i]==5)
        f++;
        if(A[i]==6)
        g++;
         if(A[i]==7)
        h++;
        if(A[i]==8)
        k++;
        if (A[i]==9)
        j++;
    }
    printf("girilen dizide\n%d tane 0\n%d tane 1\n%d tane 2\n%d tane 3\n%d tane 4\n%d tane 5\n%d tane 6\n%d tane 7\n%d tane 8\n%d tane 9",a,b,c,d,e,f,g,h,k,j);
    return 0;
}