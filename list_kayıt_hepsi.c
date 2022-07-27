//yaaa çok mükemmel oldun sen ^_^
                               
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct personel
{
    char adi[21];
    struct personel *sonraki;
};
//artık struct personel yerine dugum kullanılacak
typedef struct personel dugum;
//*head dugum tipinde bir işaretçidir.
//her zaman listenin başını gösterecek
dugum *head,*q,*newnode,*silinecek,*p;
//silinecek i geçen koddaki p gibi kullandım 
//KAYIT ARAMA
dugum * createList(void)
{   
    int i,n;
    printf("How many student in the list= ");
    scanf("%d",&i);
    for(n=0;n<i;n++)
    {   
        if(n==0)
        {
            head=(dugum *)malloc(sizeof(dugum));
            silinecek=head;
        }
        else
        {
        silinecek->sonraki=(dugum *)malloc(sizeof(dugum));
        silinecek=silinecek->sonraki;
        }
        printf("\nenter %d.student name: ",(n+1)); scanf("%s",silinecek->adi);
        
    }
    silinecek->sonraki=NULL;
    return head;
}
void ara(char *aranan)
{
    //*aranan olmasının sebebi diziyi pointer olarak kullanabilirim
    //bu ara fonksiyonu hem eklemede hem silmede var :))
    p=head; //buradaki head globalde tanımladığım için direk eşitleyebilirim
    q=head;
    while(p->sonraki!=NULL)  //  !!!değişiklik!!!
    {
        
        // iki stirng == ile kontrol edilemez
        //strcmp iki yazıyı karşılaştırır
        if(strcmp(p->adi,aranan)>=0) break;
        q=p;
        p=p->sonraki;
    }
}
void ekle(char *isim)
{
    newnode=(dugum *)malloc(sizeof(dugum));
    strcpy(newnode->adi,isim);
    ara(newnode->adi);
    if(p==head)
    { 
        newnode->sonraki=q;
        head=newnode;
    }
    else
    {
        newnode->sonraki=q->sonraki;
        q->sonraki=newnode;
    }
    

}
void sil(char *s)
{
    ara(s);
    if(q==head)
    {
        head=q->sonraki;
        free(q);
    }
    else
    {
        silinecek=q->sonraki;
        printf("-->%s",silinecek->adi);
        q->sonraki=silinecek->sonraki;
        free(silinecek);
    }
    
}
void listele(void)
{
    dugum *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n%s   \n",p->adi);
        p=p->sonraki;
    }
}

void enUzunBul(void)
{
    dugum *p,*enuzun;
    p=head;
    enuzun=head;
    while(p!=NULL)
    {
        if(strlen(p->adi)>=strlen(enuzun->adi))
        {
            enuzun=p;
        }
        p=p->sonraki;

    }
    printf("\nEn uzun: %s",enuzun->adi);
    getchar();

}
int main()
{
    int num;
    char isim[21];
    //mainde tanımladığım isim fonksıyonlarda tanımlamadan kullanılmaz
    //mainde sadece fonksiyonları çağır işlemler için fonksiyonlar yazmalısın
    dugum *s;
    

    //baby return döndürdüğün bir fonksiyonu çağırdığında onun returnune eşit bir şeye çevirmelisin adam geri döndü dünyaya ne olucak çiçek mi :))
    s=createList();
    //isimleri alfabetik girmeyince işlemleri yanliş yapıyor
    //systm("cls");
    
        //system("cls");
        listele();
        printf("\n\n1-Ekle\n2-Sil\n3-En Uzun İsim\n4-Cikis\n\nNo : ");
        scanf("%d",&num);


   
    
    
    
        switch (num)
        {
            case 1 : printf("\nAdi :");
            printf("eklenecek ismi giriniz:");scanf("%s",isim);  
            // sadece ben gets kullan(a)madım :) ve numarayı hoca char almış ben int olarak aldım
            //daha kolay :))
            ekle();break;
            case 2 : printf("\nAdi :");scanf("%s",isim);
            sil(isim);break;
            case 3 : enUzunBul();break;
            case 4 : exit(0);break;
            
        }
    listele();
    
    return 0;
}
