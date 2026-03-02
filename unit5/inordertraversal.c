# include <stdio.h>

struct inordertraversal
{
    int data;
    struct inordertraversal *left;
    struct inordertraversal *right;
    /* data */
};
 
void inorder(struct inordertraversal* root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }


}

