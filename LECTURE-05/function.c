//FUNCTION

#include <stdio.h>

int main() {
    int number, original, reverse = 0, sum = 0, digit, fact, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

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
