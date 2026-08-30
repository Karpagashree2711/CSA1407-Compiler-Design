#include <stdio.h>

int term(int a, int b) {
    return a * b;
}

int main() {
    int a, b, c, result;

    printf("Enter a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);

    result = a + term(b, c);

    printf("Result = %d\n", result);
    return 0;
}
