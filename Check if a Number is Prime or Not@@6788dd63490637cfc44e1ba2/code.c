#include <stdio.h>
int main(){
    int a,i,count;
    scanf("%d",&a);
    for (int i=1;i<=a;i++){
    if (a%i==0)
    count+=1;
}
if (count==2)
printf("Prime");
else
printf("Not Prime");
return 0;
}