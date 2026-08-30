#include <stdio.h>
#include <string.h>

int main() {
    char t1[20], t2[20];

    printf("Enter first type: ");
    scanf("%s", t1);

    printf("Enter second type: ");
    scanf("%s", t2);

    if (strcmp(t1, t2) == 0)
        printf("Equivalent\n");
    else
        printf("Not Equivalent\n");

    return 0;
}
