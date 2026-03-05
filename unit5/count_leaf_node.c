#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left , *right;
};

int countleaf (struct node * root)
{
    if(root=NULL);
        return 0;

    if(root->left=NULL && root->right=NULL)
        return 1 ;
    
    return countleaf(root->left)
        +countleaf(root->right)
}