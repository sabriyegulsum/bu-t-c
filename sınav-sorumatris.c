#include <stdio.h>
int main()
{
    int matris[4][5]={{1,67,76,55},{2,34,79,76},{3,56,68,57},{4,66,89,65}};
    int j,i,ort=0,top=0,a=0,max=0;
    for(j=1;j<3;j++)
    {
        for(i=1;i<4;i++)
        {
        top+=matris[j][i];
        }
        ort=top/3;
        matris[a][4]=ort;
        a++;
        top=0;
    }
    for(i=0;i<3;i++)
    {
    if(matris[i][4]>max)
    max=matris[i][4];
    }
    printf("en yüksek ortalama %d. id ve %d puandır",i,max);
    return 0;

}