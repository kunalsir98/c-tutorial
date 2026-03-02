#include <stdio.h>

void modify(int x) {
    x = x + 10;   // Modifying copy
    printf("Value inside function: %d\n", x);
}

int main() {
    int num = 20;

    printf("Value before function call: %d\n", num);

    modify(num);   // Passing value

    printf("Value after function call: %d\n", num);

    return 0;
}