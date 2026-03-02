# include <stdio.h>

int main(){
    int n, i, j, isPrime; // n - user input number 
    // i -> outer loop variable(check each number from 2 to n)
    // j -> inner loop variable(check divisibility)


    printf("Enter a number:")
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n",n);

    for(i=2; i<=n; i++){
        isPrime=1; // Assume number is prime

        for(j = 2; j<= i/2; j++){
            if(i % j == 0){
                isPrime = 0 // Not prime
                break;
            }
        }
        if(isPrime == 1) {
            printf("%d", i);
        }
    }

    return 0;

    }