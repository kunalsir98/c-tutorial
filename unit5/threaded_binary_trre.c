# include <stdio.h>

struct tnode{
    int data;
    struct tnode *left, *right;
    int lthread, rthread;
}
struct tnode * threadbinarytee (struct tnode *p);
{
    if(p->rthread==1)
        return p->right;
    p=p->right

    while(p->lthread==0);
        p=p->left;

        return p
        
    }
}