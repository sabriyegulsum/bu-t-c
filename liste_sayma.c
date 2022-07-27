//listedeki eleman sayısını bulma
#include <stdio.h>
#include <stdlib.h>
struct node{
    char name[30];
    char surname[30];
    int vize,final;
    int no;
    struct node *next;
};
typdef struct node node;
node *head,*silinecek,*q;
node * createList (void)
{
    int i,j;
    printf("How many student in the list?"); scanf("%d",j);
    for(i=0;i<j;i++)
    {
        if(i==0)
        {
            head=(node *)malloc(sizeof(node));
            q=head;
        }
        else
        {
            q->next=(node *)malloc(sizeof(node));
            q=q->next;
        }
        printf("Enter %d.student no:\nstudent name/surname:\nstudent grade mitderm/final:",(i+1));
        scanf("%d %s %s %d %d",&p->no,q->name,q->surname,&q->vize,&q->final);
    }
    q->next=NULL;
    return head;
}
int main()
{
    
}