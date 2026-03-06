#include <stdio.h>
#define MAX 10 

int stack[MAX]
top=-1 

int main(){
    void push(int value){
        if(top==MAX-1){
            printf("stack overflow")
        }else{
            top++
            stack[top] = value;
            printf("Value inserted at the top of stack/n",value)

        }
    }

    // pop operation
    void pop(){
        if(top=-1){
            printf("stack underflow")
        }else{
            printf("stack deleted from the top of stack/n",stack[top]);
            top--

        }
    }

    \\display operation 
    void display(){
        if(top==-1){
            printf("stack is empty")
        }else{
            printf("display the value of operation")
            for(int i =top; i<=0, i--){
                printf(stack[i])
            }
        }
    }
    int main()

    push(20)
    push(20)
    push(6)

    pop(20)

    display();

    return 0;
}
