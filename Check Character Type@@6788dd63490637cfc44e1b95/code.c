// Your code here...
#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a=='a' || a=='e' || a=='i' || a=='O'|| a=='u')
    printf("Vowel");
    else if(a>='a' && a<='z')
    printf("Consonant");
    else if (a>='0' && a<='9')
    printf("Digit");
    else
    printf("Special Character");
    
    return 0;
}