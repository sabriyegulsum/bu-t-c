#include <stdio.h>

#define N 7
long power(int,int);
void prn_heading (void);
void prn_table_of_powers (int);

int main(void)
{
    prn_heading();
    prn_table_of_powers(N);
    return 0;
}
void prn_heading(void)
{
    printf("\n::::::  TABLE OF POWERS  ::::::\n\n");
}

void prn_table_of_powers(int n)
{
    int i,j;
    for(i=1;i<=n; ++i){
        for(j=1; j<=n; ++j)
        if(j==1)
            printf("%ld",power(i,j));
        else
            printf("%9ld",power(i,j));
        putchar('\n');

    }
        
}

long power (int m,int n)
{
    int i;
    long product =1;
    for(i=1 ; i<= n; ++i)
    product*=m;
return product;
}