// Your code here..
#include<stdio.h>
int main(){
    int n;
   int arr[n];
    scanf("%d",&n);
    int count=0;
    int cou=0;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count++;
        }
        else{
            cou++;
        }
    }

    printf(count," ",cou);
}