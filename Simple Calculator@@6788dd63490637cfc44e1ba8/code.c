#include <stdio.h>

int main() {
    int a, b;
    char c;
    scanf("%d %d %c",&a,&b,&c);

    // Input two integers and the operator
    if (c=='+')
    printf("%d",a+b);
    return 0;
}
