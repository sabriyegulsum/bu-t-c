
#include <stdio.h>
#include <stdlib.h>

struct node {
    int not;
    char name[40];
    struct node *next;
};
typedef struct node node;
node *head,*p,*q;
node * createList(void)
{   
    int i,k;
    printf("How many student in the List?:");
    scanf("%d",&i);
    for(k=0;k<i;k++)
    {
        if(k==0)
        {
            head=(node *)malloc(sizeof(node));
            p=head;
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
            
        }
        else
        {
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
        }
        printf("%d.student name not",(k+1));
        scanf("%s",p->name);
        scanf("%d",&p->not);
    
    }
    p->next=NULL;
    printf("\nListe bitmiştir lütfen seçeneklerden birini seçerek işaretleyiniz\n");
    return head;
// liste oluşturmada ve bilgi girmede sorun yok
}
int ort_bul(void)
{
    int ort;
    int toplam=0;
    int sayac=0;
    p=head->next;
    while(p!=NULL)
    {
        toplam+=p->not;
        sayac++;
        p=p->next;
    }
    ort=toplam/sayac;
    return ort;
}
void ort_yadir(void)
{
    int x;
    x=ort_bul();
    printf("Ortalama:%d\n",x);
}
void basarili(void)
{
    node *sira;
    sira=head->next;
    int x;
    x=ort_bul();
    printf("\nBaşarılı Öğrenciler\n");
    while(sira!=NULL)
    {
        if(sira->not>=x)
            printf("%s\n",sira->name);
        sira=sira->next;
    }
}
void basarisiz(void)
{
    node *sira;
    sira=head->next;
    int x;
    x=ort_bul();
    printf("\nDersten Kalan Öğrenciler\n");
    while(sira!=NULL)
    {
        if(sira->not<x)
            printf("%s\n",sira->name);
        sira=sira->next;
    }
}
void sil(void)
{
    int x;
    q=head;
    x=ort_bul(); // bu fonksiyonu çağırdığımda p nin değerlerini değiştirir tekrar başa almam gerekir
    p=q->next;
    while(p!=NULL) // p->next desem son elemanı saymıyor dikkat!!!
    {
        
    
        if(p->not<x)
        {
            if(p->next==NULL)
            {
                free(p);
                q->next=NULL;
                p=NULL;     
            }
            else
            {
                q->next=p->next;
                free(p);
                p=q->next;
            }       
        }
        else
        {
           p=p->next;
           q=q->next;
        }
    }
}
void enbasarili(void)
{
    node *enbasarili;
    q=head;
    p=head->next;
    enbasarili=p;
    while(p!=NULL)
    {
        if(enbasarili->not<=p->not)
            enbasarili=p;
            p=p->next;
    }
    printf("\nEn Başarılı Öğrenci:%s=%d",enbasarili->name,enbasarili->not);
}
void listele(void)
{
    q=head->next;
    while(q!=NULL)
    {
        printf("student name:%s\n",q->name);
        printf("student not:%d\n",q->not);
        q=q->next;
    }
}
int main()
{
    int x;
    printf("OBS sistemine Hoşgeldiniz\nöğrencilerin notlarını girmek için-1\nortalamayı yazdırmak için-2\nBaşarılı öğrencileri yazdırmak için-3\nDersten kalan öğrencileri görüntülemek için -4\nortalaması ortalamadan düşük öğrencileri listeden silmek için -5\nlisteyi görüntülemek için-6\nEn başarili öğrenci için-7\nsistemden çıkış için-0");

    scanf("%d",&x);
    while(x!=0)
    {
        switch(x)
        {
            case 0:exit(0);break;
            case 1:createList();break;
            case 2:ort_yadir(); break;
            case 3:basarili(); break;
            case 4:basarisiz(); break;
            case 5:sil(); break;
            case 6:listele(); break;
            case 7:enbasarili();break;
        }
        scanf("%d",&x);
    }
    return 0;
}
