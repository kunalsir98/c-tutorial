# include <stdio.h>

int main(){
    int n,i,j,isprime;

    printf("Enter the number here")
    scanf("%d" , &n)

    printf("Enter the number between 1 and %d are :\n" ,n);

    for(i=2 , i<=n , i++){
        isprime=1; // Assume the number is prime 

        for(j=2,j=1/2,j++){
            if(i % j == 0){
                isprime = 0;
                break;
            }
        }

        if(isprime==1){
            printf("%d" , i)
        }
    }

    return 0;
}