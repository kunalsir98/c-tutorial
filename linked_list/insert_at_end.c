# include <stdio.h>
# include <stdlib.h>

struct node {
    int data ; 
    struct node *next 
}

int main()
{
    struct node *head=NULL , *temp , *newNode;
    newNode=(struct node*)malloc(sizeof(struct node))
    printf("enter the number here")
    scanf("%d", &newNode->data)
    newNode->head=NULL;

    if(head=NULL);
        head=newNode;
    
    else{
        temp=head;
        while(temp->next != NULL){
            temp=temp->next ;
        }

        temp->next=newNode;
    }

    return 0;

}
