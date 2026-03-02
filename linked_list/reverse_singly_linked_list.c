# include <stdio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node*next 

};

int main()
{
    struct node * head=NULL, prev=NUll, *curr,*next;

    curr=head;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    head=prev
    printf('List reversed')
    return0 
}