# include <stdio.h>
# include <stdlib.h>

struct node {
    int data;
    struct node * next;

}

int main()
{
    struct node *head=NULL , *newNode;
    newNode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the number here");
    scanf("%d",&newNode->data);

    newNode->next=head //Link new node to old head
    head=newNode // Move head to newnode

    return 0;
}