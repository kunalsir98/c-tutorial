#include <stdio.h>
#define SIZE 5 

int queue [SIZE]
int front =-1 , rear=-1

void enqueue(int value){
    if(rear==SIZE-1){
        printf("QueOverflow")
    }else{
        if(front=-1);
            front = 1;
        rear++
        queue[rear]==value

        printf(value)

    }
   
}
void deque(int value){
    if(front=-1||front>rear){
        printf("que under flow")
    }else{
        printf(queue[front])
        front++
    }
}

