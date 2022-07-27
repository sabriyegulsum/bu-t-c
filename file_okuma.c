#include <stdio.h>
int main()
{
    int hesapno;
    char ad[20];
    double bakiye;
    FILE *myptr; // pointer oluşturmalıyız
    myptr=fopen("musteri.dat","r");
    printf("%-10d%-13s%lf\n",hesapno,ad,bakiye);
    fscanf(myptr,"%d %s %lf",&hesapno,ad,&bakiye);
    while(!feof(myptr))
    {
        printf("%-10d%-13s%lf\n",hesapno,ad,bakiye);
        fscanf(myptr,"%d %s %lf",&hesapno,ad,&bakiye);
    }
    fclose(myptr);
    return 0;


}