#include<stdio.h>
#include<stdlib.h>
typedef struct node                 ///////////iterative method
{
    struct node *left,*right;
    int data;
}node;

int height(node *root)
{
    node *temp=root;

    int left_height=0;
    int right_height=0;
    if(root==NULL)
    {
        return(0);
    }
    left_height=height(temp->left);

    right_height=height(temp->right);

    if(left_height>right_height)
    {
        return(left_height+1);

    }
    else {return(right_height+1);}
}

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
    else if(x<root->data)
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
    root=bst_enter(root,15);
    root=bst_enter(root,30);
    root=bst_enter(root,25);
    root=bst_enter(root,20);
    root=bst_enter(root,10);
    root=bst_enter(root,4);



    int x=height(root);
    printf("%d",x);
}

