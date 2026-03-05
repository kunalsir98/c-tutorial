# include <stdio.h>

struct tnode{
    int data;
    struct tnode *left *right;
    int lthread, rthread
};

struct tnode* threadedbinarytree(struct node *p);
{
    if(p->rthread==1)
        return p->right;
    
    p=p->right;

    while(lthread==0)
        p=p->left;

    
    return p ;


}