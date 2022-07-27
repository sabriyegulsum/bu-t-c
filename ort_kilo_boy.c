#include <stdio.h>

int main()
{
    int ortk=0,ortb=0,toplamb=0,toplamk=0,i,j,s[2][10];
    printf("ilk önce boy sonra kilo değerlerini giriniz");
    for(i=0;i<2;i++)
    {
        
        for(j=0;j<10;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }    
        for(i=0;i<2;i++)
        {
            for(j=0;j<10;j++)
            {
                if(i==0)
                toplamk+=s[i][j];
                if(i==1)
                toplamb+=s[i][j];
            }
        }
        ortk=toplamk/10;
        ortb=toplamb/10;
        printf("ortalama kilo: %d\nortalama boy: %d",ortk,ortb);
    
    return 0;
}