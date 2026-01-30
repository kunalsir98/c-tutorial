#include <stdio.h>

struct node{
    int main;
    struct node*left;
    struct node*right;

}

int countLeaf(struct node*root)
{
    if (root==NULL)
        return 0;

    if(root->left == NULL && root->right==NULL)
        return 1;

    return countLeaf(root->left)
        +countLeaf(root->right); 

}