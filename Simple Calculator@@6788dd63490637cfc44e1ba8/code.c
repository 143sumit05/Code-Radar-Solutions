#include <stdio.h>

int main() {
    int a, b;
    char c;

    // Input two integers and the operator
    if (scanf("%d %d%c", &a, &b, &c) != 3) {
        printf("error\n");
        return 0;
    }

    // Switch statement to perform the operation based on the operator
    switch (c) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error\n");  // Handle division by zero
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("error\n");  // Invalid operator case
    }

    return 0;
}
