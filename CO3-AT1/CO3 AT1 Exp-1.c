#include <stdio.h>
#include <ctype.h>

int E(char **s);

int F(char **s) {
    int n = 0;
    if (**s == '(') {
        (*s)++;
        n = E(s);
        (*s)++;
    } else {
        while (isdigit(**s))
            n = n * 10 + (*(*s)++ - '0');
    }
    return n;
}

int T(char **s) {
    int n = F(s);
    while (**s == '*' || **s == '/') {
        char op = *(*s)++;
        int x = F(s);
        n = (op == '*') ? n * x : n / x;
    }
    return n;
}

int E(char **s) {
    int n = T(s);
    while (**s == '+' || **s == '-') {
        char op = *(*s)++;
        int x = T(s);
        n = (op == '+') ? n + x : n - x;
    }
    return n;
}

int main() {
    char exp[100];
    printf("Enter expression: ");
    scanf("%s", exp);

    char *p = exp;
    printf("Result = %d\n", E(&p));
    return 0;
}
