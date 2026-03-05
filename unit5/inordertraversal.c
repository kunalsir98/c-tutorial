# include <stdio.h>
# include <stdlib.h>

struct inordertraversal{
    int data;
    struct inordertraversal *left;
    struct inordertraversal *right;
};

void inorder ( struct inordertraversal *root);
{
    if(root!=NULL);
    {
        inorder(root->left);
        printf("%d" , root->data);
        inorder(root->right);
    }

    
}