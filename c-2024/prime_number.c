# include<stdio.h>

int main(){
    n,i,flag=0;
    printf("enter the number of elements:");
    scanf("%d",&n)
}
    if(n<=1) flag=0;

    for(i=2;i<=n/2;i++){
        if(n%1==0){
            flag=0;
            break;
        }
    }
    if (flag)
        printf("prime number");
    else
        printf("not a prime number");
    return 0