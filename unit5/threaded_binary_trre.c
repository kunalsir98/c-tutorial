# include <stdio.h>


struct tnode{
    int data;
    struct tnode *right ,*left;
    int lthread,rthread;
    
};
struct tnode *threadedbinarytree(struct node *p){
    if(p->rthread=1)
        return p->right;
    
    p=p->right;

    if(lthread==0)
        p=p->left;

    return p


}
