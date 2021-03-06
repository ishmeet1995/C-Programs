#include<stdio.h>
#include<stdlib.h>

typedef struct node{

int data;
struct node *left,*right;
}node;


int bst_enter(node *root,int x)
{
    node *temp=(node *)malloc(sizeof(node));
    temp->data=x;
    temp->left=NULL;
    temp->right=NULL;

    if(root==NULL)
    {
        root=temp;

    }
    else if(x<=root->data)
    {
        root->left=bst_enter(root->left,x);
    }
    else
    {
        root->right=bst_enter(root->right,x);
    }
    return(root);

}

int main()
{
    node *root=NULL;
    node *temp=NULL;
    root=bst_enter(root,15);
    root=bst_enter(root,20);
    temp=root;
    while(root!=NULL)
    {
        printf("%d",root->data);
        root=root->left;
    }
      while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->right;
    }
}
