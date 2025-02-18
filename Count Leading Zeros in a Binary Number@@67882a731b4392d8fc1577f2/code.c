// Your code here...
#include <stdio.h>
int main(){
    int a;
    int count = 0;
    scanf("%d",&a);
    for (int i=31;i<=0;i--){
        if(a>>i)&1{
        break;
        }
        count++;
    }
    printf("%d",count);
    return 0;
}