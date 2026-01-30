#include <stdio.h>
#include <stdlib.h>

struct node 

{
    int data;
    struct node *next;
}

int main()

{
    struct node *head = NULL, *newNode;

    newNode = (struct node*)malloc(sizeof(struct node));
    printf("enter the data here:");
    scanf("%d", %newNode->data);

    newNode->next=head;
    head=newNode;

    return 0;

}