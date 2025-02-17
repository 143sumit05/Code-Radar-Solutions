#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    // Input two integers and the operator
    if (c=='+')
    printf("%d",a+b);
    else if (c=='-')
    printf("%d",a-b);
    else   if (c=='*')
    printf("%d",a*b);
  else if (c == '/') {
        if (b == 0) {
            printf("error\n");  // Handle division by zero
        } else {
            printf("%d\n", a / b);
        }
    else
    printf("error");
    return 0;
}
