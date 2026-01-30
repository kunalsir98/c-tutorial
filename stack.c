#include <stdio.h>
#define MAX 5

int stack[MAX];
int top = -1;

void push(int item) {
    if(top == MAX - 1)
        printf("Stack Overflow\n");
    else
        stack[++top] = item;
}

void pop() {
    if(top == -1)
        printf("Stack Underflow\n");
    else
        top--;
}

void peek() {
    if(top == -1)
        printf("Stack Empty\n");
    else
        printf("Top = %d\n", stack[top]);
}

int main() {
    push(10);
    push(20);
    peek();
    pop();
    peek();
    return 0;
}

# include <stdio.h>
#define max 5 

int stack[MAX]
top=-1

void push(int item){
    if(top==MAX-1);
        printf("stackoverflow");
    else
        stack[++top] == item
}

void pop(){
    if (top==-1)
        printf("stack underflow\n");
    else 
        top--;
}

void peek(){
    if(top==-1)
        printf("stack is empty")
    else 
        printf(stack[top])
    
}
int main(){
    push(10);
    push(10);
    pop();
    display();
    return 0;
}