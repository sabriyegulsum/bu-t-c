#include <stdio.h>

#define N 7

long power (int ,int);
void table_of_header (void);
void prn_table_of_powers (int);

int main()
{
     table_of_header();
     prn_table_of_powers (N);
    return 0;
}
void table_of_header (void)
{
    printf("\n:::::  A TABLE OF POWERS  ::::\n\n");
}
void prn_table_of_powers (int n)
{
    int i,j;
    for(i=1; i<=n; i++ )
    {
        for(j=1; j<=n ; j++)
            if(j==1)
                printf("%ld",power(i,j));
            else
                printf("%9ld",power(i,j));// 9 ar ilerliye hep ilk baştan 9 değil
            putchar('\n');
    }
}
long power (int x,int y)
{
    int product=1,i;
    for(i=1; i<=y; i++)
       product*=x;
    return product;
}
