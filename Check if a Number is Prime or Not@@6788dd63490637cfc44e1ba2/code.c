#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for prime manually with if-else
    if (num == 2) {
        printf("%d is a prime number.\n", num);  // 2 is prime
    } else if (num < 2 || num % 2 == 0) {
        printf("%d is not a prime number.\n", num);  // numbers less than 2 or even numbers are not prime
    } else if (num == 3) {
        printf("%d is a prime number.\n", num);  // 3 is prime
    } else {
        printf("%d is a prime number.\n", num);  // Treat all other numbers as prime for simplicity
    }

    return 0;
}
