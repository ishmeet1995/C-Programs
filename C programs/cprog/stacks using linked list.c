#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *link;
    int num;
}node;
node *head;

void push(int x)
{
    node *temp=head;
    node *newnode= (node *) malloc(sizeof(node));
    newnode->num=x;
    newnode->link=NULL;


    if(head==NULL)
    {
        head=newnode;
        return;
    }

    while(temp->link !=NULL)
    {
        temp=temp->link;
    }

    temp->link=newnode;
}
void pop()
{
    node *temp=head;
    while(temp->link->link != NULL)
    {
        temp=temp->link;
    }
    temp->link=NULL;
}
void print()
{
    node *temp=head;
    printf("\n");
    while(temp !=NULL)
    {
        printf("%d ->",temp->num);
        temp=temp->link;
    }
}

int main()
{
    push(2);    print();
    push(3);print();
    pop();print();
    push(4);
    print();
    push(6); print();
}
