#include <stdio.h>
#include <stdlib.h>
struct node{
    char name[40];
    struct node *next; 
};
typedef struct node node;
node * createList(void)
{
    node * head,*p;
    int i,n;
    printf("How many student in the list? "); scanf("%d",&n);
    for(i=0;i<n;i++)
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
            scanf("%s",p->name);
        }
        p->next=NULL;
        return head;
}
void alphabetical_sort(node * p)
{
    node *q,*head;
    q=p;
    head=p;
    p=p->next;
    int k,m;
    for(k=2;p!=NULL;k++)
    {
        p=p->next;
    }
    p=q->next;
    for(m=0;m<k;m++)
    {
        if(q->name[m]>p->name[m]&&q->name[m]!=p->name[m])
        {
            p=q;
            q=p->next;
        }
        /*else if(q->name[m]==p->name[m])
        {
           if(q->name[m+1]>p->name[m+1]) 
           {
                p=q;
                q=p->next;
           }
        }*/
        q=q->next;
        p=p->next;
    }
    while(head!=NULL)
    {
        printf("%s\n",head->name);
    }
}
int main()
{
    node *p;
    p=createList();
    while(p!=NULL)
    {
        printf("%s\n",p->name);
        p=p->next;

    }
    alphabetical_sort(p);
    return 0;
}
