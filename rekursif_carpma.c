#include <stdio.h>
int carpim(int a,int b)
{
    if(b==0)
    {
        return 0;
    }
    return a+carpim(a,b-1);
}
int main()
{
   int x,y;
   printf("carpim yapılacak sayıları giriniz: ");
   scanf("%d%d",&x,&y);
   printf("%d*%d = %d\n",x,y,carpim(x,y));
   return 0; 
}