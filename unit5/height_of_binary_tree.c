int height(struct node *root)
{
    int lh, rh;
    if (root==NULL)
        return 0;

    lh = height(root->left);
    rh = height(root->right);

    return(lh>rh? lh:rh) +1;
}