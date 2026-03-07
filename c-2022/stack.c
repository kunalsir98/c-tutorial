# include <stdio.h>
#define MAX 10

int stack[MAX]
top=-1

int main(){
    void push(int value){
        if(top==MAX-1){
            printf("stack is overflow")
        }else{
            top++
            stack[top] = value;
            printf("value inserted at the top of stack", value)
        }
    }

    void pop(int value){
        if(top=-1){
            printf("stack underflow")
        }else{
            printf("stack deleted from the top of stack",stack[top]);
            top--

        }
    }

    void display(){
        if(top==-1){
            printf("stack is empty")
        }else{
            printf("display the value of operation")
            for(int i = top, i<=0, i--)
            printf(stack[i])
        }
    }
}