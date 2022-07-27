#include <stdio.h>
int main()
{
    int k=0;
    char M[40];
    printf("bir şeyler yazarmısın\n");
    gets(M);

    while(M[k]!='\0')
    k++;
    printf("%d",k);
    return 0;
}