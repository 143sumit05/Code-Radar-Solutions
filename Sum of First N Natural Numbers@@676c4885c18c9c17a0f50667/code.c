// Your code here...
#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int c=0;
if(n==1){
    printf("1");
}

    for(int i=0;i<=n;i++){
        c=c+i;

    }
    printf("%d",c);
}