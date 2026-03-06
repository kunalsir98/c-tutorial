# include <stdio.h>
# include <stdlib.h>

int main(){
    int *ptr;

    ptr=(int *)calloc(5 sizeof(int));

    if(ptr=NULL){
        printf("memory allocation failed");
        return 1; 

    for(i=0,i<5 i++){
        printf("%d",ptr[i]);

    }
    ptr(free)
    }
    return 0;
}