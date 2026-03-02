# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *next;
}

int main(){
    struct node * head= NULL , *temp , *newNode;
    int i;

    for(i=1; i<=3; i++)
    {
        newNode=(struct node*)malloc(sizeof(struct node));
        printf("Enter data: ");
        scanf("%d",&newNode->data);
        newNode->next=NULL;

        if(head=NULL);
        {
            head=newNode;
            temp=newNode
        }
        else{
            temp->next=newNode;
            temp=newNode;
        }
    }

    // Make it circular 

    temp->next=head;

    printf("circular linked list created")

    return 0;
}