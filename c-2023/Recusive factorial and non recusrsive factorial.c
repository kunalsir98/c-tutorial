// recursive 

#include <stdio.h>

int factrial(int n){
    if(n==0||n==1)
        return 1 
    else 
        return n*factorial(n-1);
}

int main(){
    int num;

    printf("enter the number here")
    scanf("%d", &num)

    printf(factrial(num))

    return 0;
}


// Non recursive 

int main(){
    int num, i;
    int fact = 1;

    printf("enter number here")
    scanf(&num)

    for(i=1; i<=num; i++)
    {
        fact=fact * i
    }
    printf(fact)

    return 0;
}
