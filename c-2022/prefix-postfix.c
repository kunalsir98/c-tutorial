#include <stdio.h>
#include <string.h>
#include <ctype.h>

char s[20][20];
int top = -1;

int main() {
    char p[20], a[20], b[20], t[20];
    scanf("%s", p);

    for (int i = strlen(p) - 1; i >= 0; i--) {
        if (isalnum(p[i])) {
            s[++top][0] = p[i];
            s[top][1] = '\0';
        } else {
            strcpy(a, s[top--]);
            strcpy(b, s[top--]);
            sprintf(t, "%s%s%c", a, b, p[i]);
            strcpy(s[++top], t);
        }
    }
    printf("Postfix: %s", s[top]);
    return 0;
}
