#include<stdio.h>
#include<stdlib.h>

typedef struct node{
    struct node *link;
    int num;
}node;

node *front=NULL;
node *rear=NULL;

int enqueue(int x)
{
    node *temp=(node *)malloc(sizeof(node));
    temp->num=x;
    temp->link=NULL;
    if(front==NULL && rear==NULL)
    {
        front=rear=temp;
        return;
    }
    rear->link=temp;
    rear=temp;

}

int dequeue()
{
    node *temp=front;
    if(front==NULL)
    {
        return;
    }
    else if(front==rear)
    {
        front=rear=NULL;
    }
    else
    {
      front=front->link;
    }
   free(temp);
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    dequeue();

    node *temp=front;
    while(temp!=NULL)
    {
        printf("%d \n",temp->num);
        temp=temp->link;
    }
}
