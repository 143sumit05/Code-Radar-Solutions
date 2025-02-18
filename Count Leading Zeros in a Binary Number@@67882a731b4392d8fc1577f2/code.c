// Your code here...
#include <stdio.h>
int main(){
    unsigned int a;
    int count = 0;
    scanf("%u",&a);
    for (int i=31;i<=0;i--){
        if(a>>i)&1{
        break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}