#include <stdio.h>

struct node{
    int data;
    struct node* left;
    struct node* right;

    
}
void postordertraversal(struct node *root)
{
    if (root!=Null)
    {
        postorder(root->left);
        postorder(root->right);
        print('%d', root->data);
    }
}