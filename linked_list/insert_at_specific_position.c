#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
}

int main()
{
    struct node * head= NULL, *newNode,*temp;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data here:");
    scanf("%d %d",&newNode->data=&pos);


    if(pos=1)
    {
        newNode->next=head;
        head=newNode;
    }
    else{
        temp=head;
        while(i<pos-1);

        temp=temp->next;
        i++;

        newNode->next= temp->next;
        temp->next=newNode

    }
    return 0;
}