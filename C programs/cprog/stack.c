//through arrays

#include<stdio.h>

#define MAXSIZE 101

int a[MAXSIZE];
int top=-1;

void push(int x)
{

    if(top==MAXSIZE)
    {
        printf("error full");
        return;
    }
     top++;
    a[top]=x;

}

void pop()
{
    if(top==-1)
    {
        printf("error -1");
        return;
    }
    top--;
}

/*void top_var()
{
    return a[top];
}*/

void print()
{
    int i;
    printf("\n");
    for(i=0;i<=top;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    push(3); print();
    push(4); print();
    pop();  print();
    push(5);
    print();
}
