#include <stdio.h>

struct node{
    int data;
    struct node *right;
    struct node *left
}

int evaluate(struct node *root)
{
    if (root->left == NULL && root->right == NULL)
        return root->data;

    int l = evaluate(root->left)
    int r = evaluate(root->right);

    switch( root->data)
    {
        case '+': return l + r;
        case '-': return l - r;
        case '*': return l * r;
        case '/': return l / r;

    }
}