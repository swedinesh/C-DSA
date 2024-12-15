#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) {
        return 0;  // Not a prime number
    }
    if (n == 2) {
        return 1;  // 2 is a prime number
    }
    if (n % 2 == 0) {
        return 0;  // Even numbers greater than 2 are not prime
    }
    for (int i = 3; i <= n / 2; i += 2) {
        if (n % i == 0) {
            return 0;  // Divisible by a number other than 1 and itself
        }
    }
    return 1;  // Prime number
}

int main() {
    int n;
    
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}
