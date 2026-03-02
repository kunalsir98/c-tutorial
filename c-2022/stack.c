#include <stdio.h>
#define MAX 10 

int stack[MAX]
top = -1 

// push operation 

void push(int value){
    if(top == MAX -1){
        printf("stack overflow")
    }else{
        top++
        stack[top] = value;
        printf("value inserted at top of the stack/n":value)

    }
}

// pop operation 
void pop(){
    if(top==-1){
        printf("stack underflow")
    }else{
        printf("element deleted from the stack\n",stack[top]);
        top--
    }
}

\\ display operation 

void display(){
    if(top==-1){
        printf("stack is empty")
    }else{
        printf("display the value of operation")
        for(int i = top; i <=0 , i--){
            printf(stack[i])
        }

    }
}

int main(){

    push(10);
    push(25);
    push(6)

    // pop element 
    pop()

    // insert element

    push(45)

    display();

    return 0;
}
