# include <stdio.h>

#define SIZE 5 

int queue[SIZE];
int front =-1 , rear= -1;

void enque(int value){

    if(rear==size-1){
        printf("queuw overflow")

        if(front==-1)
        front = 0;

        rear++
        queue[rear]=value;

        printf('value');

    }
}

void deque(){
    if(front==-1|| front > rear){
        printf("stack underflow")

    }else{
        printf(queue[front]);
        front ++
    }
}
