#include <stdio.h>
#define SIZE 5
void myarray(int b[],int);
void element(int);

int main(void)
{
    int a[SIZE]={0,1,2,3,4};
    int i;
    for(i=0; i<SIZE; i++)
    printf("%d",a[i]);
    printf("\n");

    myarray(a,SIZE);
    for(i=0; i<SIZE; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    element(a[3]);
    
    
    printf("%d\n",a[3]);
    return 0;
}

void myarray(int b[],int s)
{
    int c;
    for(c=0;c<s; c++)
    b[c]*=2;
   
}

void element(int e)
{
    printf("%d\n",e*=2);
}

