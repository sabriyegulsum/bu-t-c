#include <stdio.h>
int main()
{
int A[2][3];
int i,j,carpım=1;
printf("dizinin değerlerini giriniz");
for(i=0; i<2; i++)
{
    for(j=0; j<3; j++)
    {
        scanf("%d",&A[i][j]);
    }
}
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            while(i<1)
                carpım*=A[i][j];
            printf("birinci satır carpımı: %d",A[i][j]);
            carpım=1;
            while(i>0)
                carpım*=A[i][j];
            printf("ikiknci satır çarpımı: %d",A[i][j]);
            
        }
    }
   

 return 0;
}