#include <stdio.h>
int main()
{
    int hesapNo;
    int secim;
    char isim[30];
    double bakiye;
    FILE *ptr;
    ptr=fopen("musteri.dat","r");
    printf("HESAP İŞLEMLERİ:\n1-Hesapta para olamayan hesaplar
                            \n2-Borçlu Hesaplar
                            \n3-Heaspta para olan hesaplar
                            \n4-Çıkiş");
    scanf("%d",&secim);
    while(secim!=4)
    {
        switch(secim)
        {
            case 1:
            printf("\nPara olmayan hesaplar \n :");
            while(!feof(ptr))
            {
                if(bakiye==0)
                    printf("%-10d%-13s%-7.2f\n",hesapNo,isim,bakiye);
                fscanf(ptr,"%d %s %lf",&hesapNo,isim,&bakiye);
            }
           break; 
           case 2:
           printf("\nBorçlu hesaplar \n :");
           while(!feof(ptr))
           {
                if(bakiye<0)
                    printf("%-10d%-13s%-7.2f\n",hesapNo,isim,bakiye);
                fscanf(ptr,"%d %s %lf",&hesapNo,isim,&bakiye);
           }
           break;
           case 3:
           printf("\nPara olan hesaplar \n :");
           while(!feof(ptr))
           {
                if(bakiye>0)
                    printf("%-10d%-13s%-7.2f\n",hesapNo,isim,bakiye);
                fscanf(ptr,"%d %s %lf",&hesapNo,isim,&bakiye);
           }
           break;
        }
            rewind(ptr);
            printf("\n?\n");
            scanf("%d",secim);
    }
    
printf("program sonlandi");
fclose(ptr);
return 0;


}