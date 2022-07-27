#include <stdio.h>
#include <stdio.h>
void func(int n, int a,int b)
{
    static int i=1;
    if(n<=0) return;
    func(n-3,a-2,b+n);
        printf("\nOutput %d: %d %d %d",(i++),n,a,b);
    func(n-3,a-2,b+n);
}
int main()
{
    int n=7;
    int a=12;
    int b=8;
    func(n,a,b);
    return 0;
} 
