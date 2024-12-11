/* #include <stdio.h>

int main() {
    int n, rev = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10; // Extracts the last digit of n
        rev = rev * 10 + remainder; // Builds the reverse number
        n /= 10; // Removes the last digit of n
    }

    printf("Reverse Number : %d\n", rev);

    return 0;
} */

#include <stdio.h>

int main() {
    int number, original, reverse = 0, sum = 0, digit, fact, i;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    // Reverse the number
    /*  while (number != 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    number = reverse; // Reassign the reversed number to the number variable
*/
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
