# include <stdio.h>
# include <stdlib.h>

struct postordertraversal{
    int data;
    struct postordertraversal * left;
    struct postordertraversal * right;
};

void postordertraversal(struct postordertraversal * root)
{
    if(root!=NULL)
    {
        postordertraversal(root->left);
        postordertraversal(root->right);
        printf("%d" , root->data)

    }
}