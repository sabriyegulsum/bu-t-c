#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int age;
    char name[40];
    struct node *next;
};
typedef struct node node;
node *head,*p;
node * createList(void)
{
    int n,k;
    printf("How many student in the list?");
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        if(k==0)
        {
            head=(node*)malloc(sizeof(node));
            p=head;
        }
        else
        {
            //ilk önce p->next için yer ayrırız sonra p yi yer açtığımıza eşitleriz
            p->next=(node*)malloc(sizeof(node));
            p=p->next;
        }
        scanf("%s",p->name);
        scanf("%d",&p->age);

    }
    p->next=NULL;
    return head;
}
void ara(char *aranan)
int main()
{
    createList();

    return 0;
}