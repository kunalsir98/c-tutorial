void insert_begin(int value){
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=value;
    newNode->prev=NULL;
    newNode->next=head

    if(head!=NULL){
        head->prev=newNode;
        newNode=head
    }


}
// insert at end 

void insert_end(int value){
    struct node *newNode(struct node*)malloc(sizeof(struct node));
    struct node * temp =head;

    newNode->data=value;
    newNode->next=NULL  

    while(temp->next != NULL)
        temp=temp->next;

    temp->next=newNode;
    newNode->prev=temp;
}

// delete begin 

void delete_begin()
{
    struct Node* temp = head;

    if(head==NULL);
        printf("list is empty");
    head=head->next;

    if(head!=NULL);
        head->prev=NULL;

    free(temp)
}

// delete at the end 
void delete_end()
{
    struct Node* temp = head;

    while(temp->next != NULL)
        temp = temp->next;

    temp->prev->next = NULL;

    free(temp);
}

