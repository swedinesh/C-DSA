#include <stdio.h>

int main() {
    int number, original, reverse = 0, sum = 0, digit, fact, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    // Reverse the number
    while (number != 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    number = reverse; // Reassign the reversed number to the number variable

    // Calculate the sum of the factorial of each digit
    while (number != 0) {
        digit = number % 10;
        fact = 1;
        
        // Calculate factorial of the digit
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        number /= 10;
    }

    // Check if the sum of factorials is equal to the original number
    if (sum == original) {
        printf("%d is a Krishna Murthy number.\n", original);
    } else {
        printf("%d is not a Krishna Murthy number.\n", original);
    }

    return 0;
}



/* 
#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to reverse a number
int reverse(int n) {
    int rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Function to check if a number is a Krishna Murthy number
int isKrishnaMurthy(int n) {
    int rev = reverse(n);
    int sum = 0, temp = rev;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isKrishnaMurthy(number)) {
        printf("%d is a Krishna Murthy number.\n", number);
    } else {
        printf("%d is not a Krishna Murthy number.\n", number);
    }

    return 0;
}

*/
