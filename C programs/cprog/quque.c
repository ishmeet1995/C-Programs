#include<stdio.h>
#define max 10
int arr[max];
int front=-1,rear=-1;
int IsEmpty()
{
    if(front==-1 && rear==-1)
    {
        printf("empty\n");
        return(1);
    }
    return(0);
}
int enqueue(int x)
{
    int a;
    a=IsEmpty();
    if(a==1)
    {
        printf("entering first element\n");
        rear=front=0;
        arr[rear]=x;
    }
    else if(rear>=max)
    {
        printf("maxed out\n");
        return;
    }
    else
    {
        rear++;
        arr[rear]=x;
    }
}

int dequeue()
{
    if(front==rear)
    {
        front=rear=-1;
        return;
    }
    printf("%d\n",arr[front]);
    front++;
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);

    enqueue(4);
    enqueue(5);
    enqueue(6);
    enqueue(8);
    dequeue();
    enqueue(9);
    enqueue(10);
    enqueue(11);
    enqueue(12);
    enqueue(13);
    enqueue(14);
    int x;
    printf("\n");
    for(x=front;x<=rear;x++)
    {
        printf("%d\n",arr[x]);
    }
}

