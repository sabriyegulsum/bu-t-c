#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node 
{
    int no;
    char name[21];
    int mit,final;
    struct node *next;
};
typedef struct node node;
node *head,*q,*silinecek,*newnode,*enBasarili;

node * createList(void)
{
    int x,y;
    printf("How many student in the List: ");scanf("%d",&x);
    for(y=0;y<x;y++)
    {
        if(y==0)
        {
            head=(node *)malloc(sizeof(node));
            silinecek=head;
        }
        else
        {
            silinecek->next=(node *)malloc(sizeof(node));
            silinecek=silinecek->next;
        }
        //bir daha printfle sayı veya değer almaya kalkarsan wallah seni okutmam bu da böyle biline dikkat bacım
        printf("please enter %d.\nStudent No: ",(y+1));scanf("%d",&silinecek->no);
        printf("\nStudent Name: ");scanf("%s",silinecek->name);
        printf("\nStudent Grade\nMitderm: ");scanf("%d",&silinecek->mit);
        printf("\nFinal: ");scanf("%d",&silinecek->final);                                                                                          
    }
    silinecek->next=NULL;
    return head;

}
void ogrenciListele()
{
    double donemnotu=0;
    node *p;
    p=head;
    while(p!=NULL)
    {
        printf("\n *************** \n");
        printf("Ogrenci No: %d\t",p->no);
        printf("OgrenciAdi: %s\t\t",p->name);
        printf("Ogrenci Vize: %d\t",p->mit);
        printf("Ogrenci Final: %d\t",p->final);
        donemnotu=p->mit*(0.4)+p->final*(0.6);
        printf("Donem Notu: %.2f\t",donemnotu);
        printf("\n *************** \n");
        p=p->next;
    }
}
void ogrenciekle(void)
{   
    int i;
    node *p;
    p=head;
    q=head;

    int number;
    printf("Eklemek istediğiniz öğrencinin bilgilerini giriniz:\n ");
    newnode=(node *)malloc(sizeof(node));
    printf("Ogrenci No: ");scanf("%d",&newnode->no);
    printf("\nOgrenci Name:"); scanf("%s",newnode->name);
    printf("\nOgrenci Vize: "); scanf("%d",&newnode->mit);
    printf("\nOgrenci Final: "); scanf("%d",&newnode->final);
    printf("\nHangi kayıttan öncesine eklemek istiyorsun:"); scanf("%d",&i);
    if(p->no==i)
    {
        newnode->next=p;
        head=newnode;
    }
    else 
    {
        while(p->next!=NULL && p->no!=i)
        {
            q=p;
            p=p->next;
        }
        if(p->no==i)
        {
            q->next=newnode;
            newnode->next=p;
        }
        else if(p->next==NULL)
        {
            p->next=newnode;
            newnode->next=NULL;
        }   
    }
}
void ogrenciSil(void)
{
    node *p;
    p=head;
    q=head;
    int kayitno;
    printf("Silmek istediğiniz öğrenci numarasını giriniz: "); scanf("%d",&kayitno);
    if(p->no==kayitno)
    {
        head=p->next;
        free(p);
    }
    else 
    {
        while(p->next!=NULL && p->no!=kayitno)
        {
            q=p;
            p=p->next;
        }
        if(p->no==kayitno)
        {       
            q->next=p->next;
            free(p);
        }
        else if(p->next==NULL)
        {
           printf("Silinecek öğrenci yok\n");
        }
    }
}
double basariNotuHesaplama(int mit,int final)
{
    return ((0.4)*mit+(0.6)*final);
}
void enBasariliOgrenci()
{
    node *p;
    p=head;
    enBasarili=head;
    while(p->next!=NULL)
    {
        p=p->next;
        if(basariNotuHesaplama(p->mit,p->final)>basariNotuHesaplama(enBasarili->mit,enBasarili->final))
        {
            enBasarili=p;
        }
    }
    printf("\nEn Başarılı Öğrenci:\n ");
    printf("No: %d\tName: %s\t Basarı Notu: %.2f",enBasarili->no,enBasarili->name,basariNotuHesaplama(enBasarili->mit,enBasarili->final));
}
void sinifBasariOrtalamasi()
{
    double basariNotuOrtalamasi=0;
    double toplam=0;
    int sayac=0;
    node *p;
    if(p==NULL)
    {
        printf("Listede kayır yok!");
    }
    else
    {
        do
        {
            toplam+=basariNotuHesaplama(p->mit,p->final);
            p=p->next;
            sayac++;
        }
        while (p!=NULL); 
        //do while kullanırsan whiledan sonra  <<<  ;  >>>>  yazmalısın
        
            basariNotuOrtalamasi=toplam/sayac;
        
        printf("\nBaşasrı Notu Ortalaması: %.2f\n",basariNotuOrtalamasi);
        
        
    }
}
int main()
{
    node *list;
    list=createList();
    //ogrenciListele();
    //ogrenciekle();
    //ogrenciSil();
    enBasariliOgrenci();
    ogrenciListele();
    sinifBasariOrtalamasi();
    return 0;
}
//sınıf başarı ortalamasını yazdırmıyor