#include <stdio.h>

struct node{
    int main; 
    struct node* left;
    struct node* right;
}

void inordertraversal( struct node *root);
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}