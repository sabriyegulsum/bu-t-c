#include<stdio.h>
#include <stdlib.h>

struct node 
{
    int age;
    int identy;
    char name [40];
    struct node * next;
};
typedef struct node node;
node * head,*p;
node *createlist(void)
{

printf("How many patient in the list");
    int a,b,counter=1;
    scanf("%d",&a);
    printf("Please enter orderly name identy age");
    
    
    for(b=0;b<a;counter++,b++)
{
    if(b==0)
    {
        head=(node *)malloc(sizeof(node));
        p=head;
    }
    else
    {
        p->next=(node *)malloc(sizeof(node));
        p=p->next;
    }
    printf("\n%d.patient:",counter);
    scanf("%s%d%d",p->name,&p->identy,&p->age);
}
p->next=NULL;
return head;
}
void traverselist(void)
{
    node *q;
    createlist();
    q=head;
    while(q!=NULL)
    {
        printf("\n%s:%d-%d\n",q->name,q->identy,q->age);
        q=q->next;
    }
}


int main ()
{
    
    traverselist();
    
return 0;
}

