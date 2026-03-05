#  include <stdio.h>
# include <stdio.lib>

struct preordertraversal{
    int data;
    struct preordertraversal *left;
    struct preordertraversal *right;
};

void preordertraversal(struct preordertraversal * root)
{
    if(root!=NULL);
        {
            printf("%d",root->data);
            preordertraversal(preordertraversal->left);
            preordertraversal(preordertraversal->right);
        }
}