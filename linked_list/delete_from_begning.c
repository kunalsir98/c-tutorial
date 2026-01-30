#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;

}

int main()
{
    struct node *head = NULL , *temp;

    if(head=NULL);
        printf("list is empty");
    
    else{
        temp=head;
        head=head->next;
        free(temp);
        printf("Deleted from begning");
    }
    return 0;
    

}