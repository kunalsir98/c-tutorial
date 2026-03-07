#include <stdio.h>
#include <stdlib.h>

int main(){
    int *ptr;

    ptr=(int *)malloc(5 *sizeof(int));

    if(ptr=NULL){
        printf("memory allocation failed")
        return 1;

    if(i=0;i<5;i++){
        ptr[i] = i+1
        printf(ptr[i])
    }

    free(ptr)
    }
    return 0;
}