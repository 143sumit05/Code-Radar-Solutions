#include <stdio.h>
int main(){
    int i,a,mul;
    scanf("%d",&a);
   for(i=1;i<=10;i++)
   mul = i*a;
   printf("%d x %d = %d\n",a,i,mul);
   return 0;
}