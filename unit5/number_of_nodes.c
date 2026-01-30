#include <stdio.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

int countnodes(stuct node *root)
{
    if (root==NULL)
        return 0;

    return 1+countnodes(root->left)
            +countnodes(root->right);
}
