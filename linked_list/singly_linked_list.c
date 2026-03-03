# include <stdio.h>
# include <stdlib.h>

struct node{
    int data;
    struct node *head = NULL;
}

// insert at begning 

void insert_begin(int value){
    struct node *newNode =(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->data=head;
    head=newNode;
}

// insert at end 
void insert_end(int value){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    struct node *temp = head;

    newNode->data=value;
    newNode->next=NULL;

    if(head=newNode){
        head=newNode;
    }else{
        while(temp->next != NULL);
            temp=temp->next;
        temp->next=newNode
    }

}

// Delete from begning
void delete_begin(){
    struct node *temp;

    if(head == NULL){
        printf("list is empty\n")
        return;
    }
    temp=head;
    head=head->next;
    free(temp);
}

// display list 

void display(){
    struct node *temp = head;

    if(head == NULL){
        printf("list is empty");
        return
    }
    printf("Linked list");
    while(temp != NULL){
        printf("%d" , temp->data);
        temp=temp->next;
    }
    printf('\n')
}
// Main func()

int main(){
    insert_begin(10);
    insert_begin(5);
    insert_end(20);
    insert_end(20);

    display();

    delete_begin();

    display();

    return 0;
}