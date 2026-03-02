# include <stdio.h>

void modify(int x){
    x=x+10;
    printf('value inside function : %d\n', x);

}
int main(){
    int num = 10;

    printf("value before the function : %d\n", num);

    modify(num);

    printf("value after the function : %d\n", num );

    return 0;
}