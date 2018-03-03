#include<stdio.h>
#include<stdlib.h>
typedef struct node                 ///////////iterative method
{
    struct node *left,*right;
    int data;
}node;

int find_min(node *root)
{
        node *current=root;
        if(root==NULL)
        {
            return(0);
        }
        while(current->left!=NULL)
        {
            current=current->left;
        }
        return(current->data);

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
    root=bst_enter(root,5);
    root=bst_enter(root,10);

    int x=find_min(root);
    printf("%d",x);
}
