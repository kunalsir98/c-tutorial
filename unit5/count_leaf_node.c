# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *left *right;
}

int countleafnode(struct node *root)
{
    if(root=NULL)
     return 0
     
    if(root->left=NULL && root->right=NULL)
        return 1;

    return countleafnode(root->left);
        +countleafnode(root->right)

    
}