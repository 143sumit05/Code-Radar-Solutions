// Your code here...
#include <istdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a>='A' && a<='Z')
    printf("Uppercase");
    else if (a>='a' && a<='a')
    printf("Lowercase");
    else
    printf("Not an alphabet");
    return 0;
}