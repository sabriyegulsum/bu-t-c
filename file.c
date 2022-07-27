
#include <stdio.h>
int main()
{
    int hesapNo;
    char ad[30];
    double bakiye;
    FILE *myptr; //musteri.dat dosyası işaretcisi
    myptr=fopen("musteri.dat","w");
    printf("Hesap No,isim ve bakiye giriniz");
    printf("veri girişinibitirmek için eof gir");// eof=ctrl+z
    printf("?");
    scanf("%d %s %lf",&hesapNo,ad,&bakiye);
    while(!feof(stdin))
    {
        fprintf(myptr,"%d %s %lf\n",hesapNo,ad,bakiye);
        printf("? ");
        scanf("%d %s %lf",&hesapNo,ad,&bakiye);
    }
    fclose(myptr);
    return 0;
}