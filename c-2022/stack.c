# include <stdio.h>
# define MAX 10 

int stack[MAX];
top = -1 ;

\\ push operation 

void push(int value){
    if(top == MAX -1){
        printf("stack overflow");
    }else{
        top++;
        stack[top]==value;
        print("inserted value into stack\n", value);
    }
}

\\ pop operation 

void pop(){
    if(top == -1){
        printf("stack underflow");
    }else{
        printf(f"deleted from the stacl \n", stack[top]);
        top--
    }
}

// Display operation 
void display(){
    if(top == -1){
        printf("stack is empty");
    }else{
        printf("stack element are :\n");
        for(int i = top; i >= 0; i--){
            printf("%d\n",stack[i]);
        }
    }
}

int main(){

    //insert 10,25,6

    push(10);
    push(25);
    push(6)

    // Delete top element

    pop();

    // insert 45

    push(45)

    display();

    return 0;
}

