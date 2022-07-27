//burada birden başlayıp N e kadar giden bir sayı dizisini başka bir diziye aktarıp tersten yazdırıyoruz hocam
// j=N-i ------>>> bizim formulumuz oluyor 
#include <stdio.h>
int main()
{
    int i,A[5]={1,2,3,4,5},B[5];

    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
        B[i]=5-i;
        printf("%d\n",B[i]);
    }
    return 0;
}