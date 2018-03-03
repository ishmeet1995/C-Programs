#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define max 101
int top=-1;
int array[max];

void push(char c)
{
    if(top==max)
    {
        printf("error \n");
        return;
    }
    top++;
    array[top]=c;


}
void pop()
{
    if(top==-1)
    {
        printf("error \n");
        return;
    }
    top--;
}

int reversal(char *c,int n)
{
int i,j;
    for( i=0;i<=n;i++)
    {
        push(c[i]);
    }
    for( j=0;j<=n;j++)
    {
        c[j]=array[top];
        pop();
    }

}
int main()
{
    char c[50];
    puts("enter string \n");
    gets(c);
    reversal(c,strlen(c));
        printf("output=%s",c);

}
