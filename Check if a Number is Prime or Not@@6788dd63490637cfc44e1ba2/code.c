#include <stdio.h>
int main(){
    int i,a, count;
    scanf("%d",&a);
    for (i=i;i<=a;i++)
        if (a%i==0)
        count++;
    if(count==2)
    printf("Prime");
    else
    printf("Not Prime");
    return 0;
}