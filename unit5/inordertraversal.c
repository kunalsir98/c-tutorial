# include <stdio.h>
# include <stdlib.h>

struct inordertraversal{
    int data;
    struct inordertraversal *left;
    struct inordertraversal *right;
}

void inordertraversal(struct  *root);
{
    if(root!=NULL){
        inrordertraversal(root->left);
        printf("%d",root->data);
        inordertraversal(root->right);
    }
}