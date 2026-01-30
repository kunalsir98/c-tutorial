#include <stdio.h>

struct node{
    int data;
    struct node*left;
    struct node*right;
};

void preorder(struct node *root)
{
    if (root != NULL)
    {
        print("%d" , root->data);
        preorder(root->left);
        preorder(root-> right);
    }
}