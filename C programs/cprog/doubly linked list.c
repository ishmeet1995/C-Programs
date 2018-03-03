#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int num;
    struct node *prev,*next;
}node;


 node *head;

 node *getnewnode(int x){
    node *newnode = (node *)malloc (sizeof(node));
    newnode->num=x;
    newnode->next=NULL;
    newnode->prev=NULL;
    return newnode;
 }

void insert_newnode(int x)
{
     node *newnode=getnewnode(x);

    if(head==NULL)
    {
        head=newnode;
        return;
    }

    head->prev=newnode;
    newnode->next=head;
    head=newnode;



}

void insert_at_end(int x)
{
    node *gotoEnd=head;
    node *newnode=getnewnode(x);
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    while(gotoEnd->next !=NULL)
    {
        gotoEnd=gotoEnd->next;
    }
    gotoEnd->next=newnode;
    newnode->prev=gotoEnd;

}
int main()
{
    head=NULL;
insert_newnode(4);
insert_newnode(9);
insert_newnode(7);
insert_at_end(5);
insert_newnode(6);
node *fprint=head,*rprint=head;

while(fprint !=NULL)
{
    printf("%d ->",fprint->num);
    fprint=fprint->next;
}

printf("\n");
    while(rprint ->next !=NULL)
    {
         rprint=rprint->next;
    }

    while(rprint != NULL)
    {
    printf("%d ->",rprint->num);
    rprint=rprint->prev;

    }





}
