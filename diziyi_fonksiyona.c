#include <stdio.h>
void enbuyuk_iki(int [],int x);
int main(void)
{
    int i,a[10];
    printf("10 elemanlı dizinin elemanlarını giriniz: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    enbuyuk_iki(a,10);
    
    return 0;
}

void enbuyuk_iki(int b[],int x)
{
    int j,k,max=0,max2=0;
    for(j=0;j<10;j++)
    {
        if(b[j]>max)
           max=b[j];
    }
    for(k=0;k<10;k++)
    {
        if(b[k]>max2 && b[k]<max)
            max2=b[k];
    }
    printf("en büyük sayı: %d\nen büyük ikinci sayı: %d",max,max2);
}

