// LEAP YEAR

#include <stdio.h>

// Function to check if a year is a leap year
int isLeapYear(int year) {
    // A leap year is divisible by 4, but not divisible by 100,
    // unless it's also divisible by 400
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int main() {
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
