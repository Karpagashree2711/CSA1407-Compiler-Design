#include <stdio.h>
#include <ctype.h>

int main() {
    char exp[100];
    int stack[100], top = -1, a, b;

    printf("Enter postfix expression: ");
    scanf("%s", exp);

    for (int i = 0; exp[i]; i++) {
        if (isdigit(exp[i]))
            stack[++top] = exp[i] - '0';
        else {
            b = stack[top--];
            a = stack[top--];

            switch (exp[i]) {
                case '+': stack[++top] = a + b; break;
                case '-': stack[++top] = a - b; break;
                case '*': stack[++top] = a * b; break;
                case '/': stack[++top] = a / b; break;
            }
        }
    }

    printf("Result = %d\n", stack[top]);
    return 0;
}
