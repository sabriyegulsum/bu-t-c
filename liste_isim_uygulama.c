#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    char isim[20];
    struct node *next;
};

typedef struct node node;
node *head;
void createLisit(void)
{
    node *p;
    int a,b;
    printf("How many person in the list:");
    scanf("%d",&a);
    for(b=0;b<a;b++)
    {
        if(b==0)
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
        scanf("%s",p->isim);
    }
    p->next=NULL;
}
void sirala(void)
{
    node *p,*q,*onceki;
    q=head->next;
    onceki=head;
    p=q->next;
    
    while(p!=NULL)
    {
        if(strcmp(p->isim,q->isim)<0)
        {
            q->next=p->next;
            p->next=q;
            onceki->next=p;
            
            p=q->next;
            q=q->next;
            onceki=onceki->next;
        }
        else
        {
            p=p->next;
            q=q->next;
        }
    }
}
void listele(void)
{
    node *p;
    p=head->next;
    while(p!=NULL)
    {
        printf("\n%s",p->isim);
        p=p->next;
    }

}
int main()
{
    createLisit();
    sirala();
    listele();
    return 0;
}