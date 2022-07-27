#include <stdio.h>
#include <stdlib.h>
struct node
{
    char isim[40];
    int no;
    struct node *next;
};
typedef struct node node;
node *head,*p,*q;
int  createLisit(void)
{
    int i,k,sayac=0;
    printf("How many student in the List?");
    scanf("%d",&k);
    printf("Please enter name-no");

    for(i=0;i<k;i++)
    {
        if(i==0)
        {
            head=(node *)malloc(sizeof(node));
            p=head;
        }
        else
        {
            p->next=(node *)malloc(sizeof(node));
            p=p->next;
        }
        scanf("%s",p->isim);
        scanf("%d",&p->no);
        sayac++;
    }
    p->next=NULL;
    if(sayac%2==0)
    sayac=sayac/2-1;
    else
    sayac=sayac/2;
    return sayac;
}

void sil(void)
{
    int x;
    x=createLisit();
    p=head;
    q=head;
    for(int i=1;i<x;i++)
    {
        p=p->next;
    }
    q=p->next;
    p->next=p->next->next;
    
    free(q); 
}
void listele(void)
{
    p=head;
    while(p!=NULL)
    {
        printf("\n%s",p->isim);
        p=p->next;
    }
}
int main()
{
    sil();
    listele();
    return 0;
}