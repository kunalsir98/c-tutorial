# include <stdio.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d",root->data)
    }
}