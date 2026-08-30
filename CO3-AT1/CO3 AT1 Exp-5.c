#include <stdio.h>
#include <string.h>

int main() {
    char t1[20], t2[20], op;

    printf("Enter first type: ");
    scanf("%s", t1);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter second type: ");
    scanf("%s", t2);

    if ((strcmp(t1, "int") == 0 || strcmp(t1, "float") == 0) &&
        (strcmp(t2, "int") == 0 || strcmp(t2, "float") == 0))
        printf("Valid expression\n");
    else
        printf("Type error\n");

    return 0;
}
