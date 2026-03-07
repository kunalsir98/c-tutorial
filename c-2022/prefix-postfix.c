# include <stdio.h>
# include <ctype.h>
# include <string.h>

char s[20][20];
int top = -1 

int main(){
    char p[20] a[20] b[20] t[20];
    scanf("%d". &n);

    for(int i = strlen(p) -1, i>=0 , i++);
    if(isalnum(p[i])){
        s[++top][0]=p[i];
        s[top][i]='\0'
    }else{
        strcpy(a, s[top--1]);
        strcpy(b, s[top--1]);
        sprintf(t, "%s%s%c" a,b,p[i]);
        strcpy(s[++top], t)
    }
    printf("postfix",s[top]);
    return 0;
}