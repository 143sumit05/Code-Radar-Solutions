#include <stdio.h>

int main() {
    int a, b;
    char c;

    // Input two integers and the operator
    if (scanf("%d %d %c", &a, &b, &c) != 3) {
        printf("error\n");
        return 0;
    }

    // Check the operator using if-else statements
    if (c == '+') {
        printf("%d\n", a + b);
    }
    else if (c == '-') {
        printf("%d\n", a - b);
    }
    else if (c == '*') {
        printf("%d\n", a * b);
    }
    else if (c == '/') {
        if (b == 0) {
            printf("error\n");  // Handle division by zero
        } else {
            printf("%d\n", a / b);
        }
    }
    else {
        printf("error\n");  // Invalid operator case
    }

    return 0;
}
